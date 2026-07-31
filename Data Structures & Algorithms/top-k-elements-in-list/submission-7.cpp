class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        unordered_map<int,int>mp;
        for(int n:nums){
            mp[n]++;
        }
        
        for(auto m:mp){
            pq.push({m.second,m.first});
            while(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>ans;
        while(pq.size()!=0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
