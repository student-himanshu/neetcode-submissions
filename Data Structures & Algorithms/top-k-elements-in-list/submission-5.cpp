class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>>ans;
        for(auto v:mp){
            ans.push_back({v.second,v.first});
        }
        sort(ans.rbegin(),ans.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};
