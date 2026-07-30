class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size(),col=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0)return 0;
        int dr[]{-1,0,1,0},dc[]={0,1,0,-1};
        int min=0;
        while(!q.empty()){
            int size=q.size();
            bool rot=false;
            for(int i=0;i<size;i++){
                auto p = q.front();
                int r = p.first;
                int c = p.second;
                q.pop();
                for(int j=0;j<4;j++){
                    int nr=r+dr[j],nc=c+dc[j];
                    if( nr>=0 && nc>=0 && nr<row && nc<col && grid[nr][nc]==1 ){
                        grid[nr][nc]=2;
                        q.push({nr,nc});
                        fresh--;
                        rot=true;
                    }
                }
            }
            if(rot)min++;
        }
        return (fresh==0)?min:-1;
    }
};
