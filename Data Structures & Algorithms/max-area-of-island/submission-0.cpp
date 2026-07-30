class Solution {
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    int  bfs(int i,int j,vector<vector<int>>&vis,vector<vector<int>>& grid){
        vis[i][j]++;
        queue<pair<int,int>>q;
        q.push({i,j});
            int val=1;
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && !vis[nr][nc] && grid[nr][nc]==1){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                    val++;
                }
            }
        }
        return val;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        vector<vector<int>>vis(r,vector<int>(c,0));
        int maxval=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    maxval=max(maxval,bfs(i,j,vis,grid)); 
                }
            }
        }
        return maxval;
    }
};
