class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        queue<pair<int,int>>q;
        int row=grid.size(),col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<grid.size()&& nc>=0 && nc<grid[0].size()&& grid[nr][nc]==INT_MAX){
                    grid[nr][nc]=1+grid[r][c];
                    q.push({nr,nc});
                }

            }
        }
    }
};
