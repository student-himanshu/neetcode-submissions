class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>n1(nums.begin()+1,nums.end()),n2(nums.begin(),nums.end()-1);
        return max(nums[0],max(dfs(n1),dfs(n2)));

    }
    private:
    int dfs(vector<int>&nums){
        int r1=0,r2=0;
        for(int num:nums){
            int nr=max(r1+num,r2);
            r1=r2;
            r2=nr;
        }
        return r2;
    }
};
