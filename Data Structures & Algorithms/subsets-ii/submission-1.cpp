class Solution {
    void subset(vector<vector<int>>&ans,vector<int>&cur,vector<int>& nums,int i){
        if(i==nums.size()){
            ans.push_back({cur});
            return;
        }
        cur.push_back(nums[i]);
        subset(ans,cur,nums,i+1);
        cur.pop_back();
        int ind=i+1;
        while(ind<nums.size() && nums[ind]==nums[ind-1])ind++;
        subset(ans,cur,nums,ind);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>cur;
        sort(nums.begin(),nums.end());
        subset(ans,cur,nums,0);
        return ans;
    }
};
