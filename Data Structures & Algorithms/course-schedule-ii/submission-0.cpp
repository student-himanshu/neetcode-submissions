class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>ans;
        unordered_map<int,list<int>>adj;
        vector<int>indegree(numCourses,0);
        for(auto& i:prerequisites){
            int u=i[0];
            int v=i[1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int val=q.front();
            q.pop();
            ans.push_back(val);
            for(auto & next:adj[val]){
                indegree[next]--;
                if(indegree[next]==0){
                    q.push(next);
                }
            }
        }
        // for(int i=ans.size()-1;i<numCourses && ans.size()!=0;i++){
        //     ans.push_back(i);
        // }
        return (ans.size()==numCourses) ? ans : vector<int>{};
    }
};
