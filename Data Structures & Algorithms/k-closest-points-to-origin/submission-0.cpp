class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,pair<int,int>>>pq;
        for(auto &i:points){
                double result = sqrt(pow(i[0],2)+pow(i[1],2));
                pq.push({result,{i[0],i[1]}});
                if(pq.size()>k){
                    pq.pop();
                }

        }
        vector<vector<int>>ans;
        while(!pq.empty()){
            auto a=pq.top();
            pq.pop();
            ans.push_back({a.second.first, a.second.second});
        }
        return ans;
    }
};
