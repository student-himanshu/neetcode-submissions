class Solution {
public:
int m,n;
    void bd(vector<vector<char>>& board){
        queue<pair<int,int>>q;
        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                if((r==0 ||c==0||r==m-1||c==n-1)&& board[r][c]=='O'){
                    q.push({r,c});
                }
            }
        }
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        while(!q.empty()){
            auto[r,c]=q.front();
            q.pop();
            if(board[r][c]=='O'){
                board[r][c]='Y';
            
                for(int i=0;i<4;i++){
                    int nr=r+dr[i];
                    int nc=c+dc[i];
                    if(nr>=0 && nc>=0 && nr<m && nc<n ){
                    q.push({nr,nc});
                    }
                }
            }
        }
    };
    void solve(vector<vector<char>>& board) {
        m=board.size(),n=board[0].size();
        bd(board);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='Y'){
                    board[i][j]='O';
                }
            }
        }
    }
};
