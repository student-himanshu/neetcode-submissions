class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>out;
        for(int i=0;i<=n-k;i++){
            int mac=nums[i];
            for(int j=i;j<i+k;j++){
                mac=max(mac,nums[j]);
            }
            out.push_back(mac);
        }
        return out;
        
    }
};
