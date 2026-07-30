class Solution {
    void backtrack(int start,vector<int>& nums, vector<vector<int>>&result,vector<int>&curr){
        result.push_back(curr);
        for(int i=start;i<nums.size();i++){
            curr.push_back(nums[i]);
            backtrack(i+1,nums,result,curr);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>temp;

        backtrack(0,nums,result,temp);
        return result;
    }
};
