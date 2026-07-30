class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto f:flights){
            int v=f[1];
            int wt=f[2];
            adj[f[0]].push_back({v,wt});
        }
        vector<int>dist(n,1e9);
        dist[src]=0;
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int step=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            if(step>k)continue;
            for(auto[v,wt]:adj[node]){
                int newcost=wt+cost;
                if(newcost<dist[v]&&step<=k){
                    dist[v]=newcost;
                    q.push({step+1,{v,newcost}});
                }
            }
        }
        return (dist[dst]==1e9)?-1:dist[dst];
    }
};
