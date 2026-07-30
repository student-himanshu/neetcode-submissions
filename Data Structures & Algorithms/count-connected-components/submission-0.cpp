class Solution {
public:
    void dfs(unordered_map<int,list<int>>&adj,vector<bool>&vis,int i){
        vis[i]=true;
        for(int j:adj[i]){
            if(!vis[j]){
                dfs(adj,vis,j);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<bool>vis(n,false);
        unordered_map<int,list<int>>adj;
        int cnt=0;
        for(auto &a:edges){
            int u=a[0];
            int v=a[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,vis,i);
                cnt++;
            }
        }
        return cnt;

    }
};
