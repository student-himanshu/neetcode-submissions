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
        int min=0;
        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};
        while(!q.empty()){
            bool rot=false;
            int size=q.size();
           for(int j=0;j<size;j++){
                auto [r,c]=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int nr=r+dr[i];
                    int nc=c+dc[i];
                    if(nr>=0 && nc>=0 && nr<grid.size() && nc<grid[0].size() && grid[nr][nc]==1 ){
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
