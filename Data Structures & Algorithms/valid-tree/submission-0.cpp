class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1)return false;
        unordered_map<int,list<int>>adj;
        vector<bool>vis(n,false);
        for(auto& e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int>q;
        q.push(0);
        vis[0]=true;
        int cnt=0;
        while(!q.empty()){
            int val=q.front();
            q.pop();
            cnt++;
            for(auto& next:adj[val]){
                if(!vis[next]){
                    vis[next]=true;
                    q.push(next);
                }
            }
        }
        return cnt==n;
    }

};
