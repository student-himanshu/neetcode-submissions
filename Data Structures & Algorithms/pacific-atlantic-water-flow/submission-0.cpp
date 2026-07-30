class Solution {
public:
int m,n;
int dr[4]={-1,0,1,0};
int dc[4]={0,-1,0,1};
void dfs(int r,int c,vector<vector<bool>>&vis,vector<vector<int>>& heights){
    if(vis[r][c]){
        return;
    }
    vis[r][c]=true;
    for(int i=0;i<4;i++){
        int nr=r+dr[i];
        int nc=c+dc[i];
        if(nr>=0 && nc>=0 && nr<m && nc<n && !vis[nr][nc]&& heights[nr][nc]>=heights[r][c]){
            dfs(nr,nc,vis,heights);
        }
    }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m=heights.size();
        n=heights[0].size();
        vector<vector<bool>>atlantic(m,vector<bool>(n,false));
        vector<vector<bool>>pacific(m,vector<bool>(n,false));
        
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            dfs(i,0,pacific,heights);//left
        }
        for(int i=0;i<n;i++){
            dfs(0,i,pacific,heights);//top
        }
        for(int i=0;i<m;i++){
            dfs(i,n-1,atlantic,heights);//bottom
        }
        for(int i=0;i<n;i++){
            dfs(m - 1, i, atlantic,heights);//right
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(atlantic[i][j]&&pacific[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
