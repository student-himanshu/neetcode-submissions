class Solution {
    vector<int>memo;
    private:
    int dfs(vector<int>& nums,int val){
        if(val>=nums.size())return 0;
        if(memo[val]!=-1){
           return memo[val];
        }
            return memo[val]=max(dfs(nums,val+1),nums[val]+dfs(nums,val+2));
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        memo.resize(n+1,-1);
        return dfs(nums,0);

    }
};
