class Solution {
    void ps(vector<int>& nums,vector<int>&res, vector<vector<int>>&ans,int i){
        if(i==nums.size()){
            ans.push_back(res);
            return;
        }
        res.push_back(nums[i]);
        ps(nums,res,ans,i+1);
        res.pop_back();
        int ind=i+1;
        while(ind<nums.size() && nums[ind-1]==nums[ind])ind++;
        ps(nums,res,ans,ind);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        sort(nums.begin(),nums.end());
        ps(nums,res,ans,0);
        return ans;
    }
};
