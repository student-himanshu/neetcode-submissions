class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto & time:times){
            int u=time[0];
            int v=time[1];
            int w=time[2];
            adj[u].push_back({v,w});
        }
        using pi=pair<int,int>;
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        vector<int>dist(n+1,1e9);
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            auto[t,u]=pq.top();
            pq.pop();
            if(t>dist[u])continue;
            for(auto& [v,w]:adj[u]){
                if(dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==1e9)return -1;
            ans=max(ans,dist[i]);
        }
        return ans;

    }
};
