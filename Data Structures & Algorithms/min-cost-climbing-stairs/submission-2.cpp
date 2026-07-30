class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // vector<int>dp(n+1);
        // dp[n]=0;
        // dp[n-1]=cost[n-1]
        int next1=0,next2=0;

        for(int i=n-1;i>=0;i--){
            int curr=cost[i]+min(next1,next2);
            next2=next1;
            next1=curr;
        }
        return min(next1,next2);

    }
};
