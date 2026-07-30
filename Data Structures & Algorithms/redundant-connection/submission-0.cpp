class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        unordered_map<int,list<int>>adj;
        vector<int>indegree(n+1,0);
        for(auto& i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u); 
            indegree[u]++;
            indegree[v]++;

        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==1){
                q.push(i);
            }
        }
        while(!q.empty()){
            int front =q.front();
            q.pop();
            indegree[front]--;
            for(int neigh:adj[front]){
                indegree[neigh]--;
                if(indegree[neigh]==1)q.push(neigh);
            }
        }
        for(int i=edges.size()-1;i>=0;i--){
            int u=edges[i][0],v=edges[i][1];
            if(indegree[u]==2&& indegree[v]){
                return {u,v};
            }
        }
        return {};
    }
};
