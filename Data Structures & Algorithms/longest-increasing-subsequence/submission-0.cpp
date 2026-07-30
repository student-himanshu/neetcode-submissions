class Solution {
    vector<vector<int>>dp;
    int dfs(int i,vector<int>& nums,int prev){
        if(i==nums.size())return 0;
        
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        int notpick=dfs(i+1,nums,prev);
        int pick=0;
        if(prev==-1||nums[i]>nums[prev]){
             pick=1+dfs(i+1,nums,i);
        }
        return dp[i][prev+1]=max(pick,notpick);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,vector<int>(n+1,-1));
        return dfs(0,nums,-1);
    }
};
