class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int l=0,r=1;
        while(r<n){
            if(prices[l]<prices[r]){
                int pr=prices[r]-prices[l];
                ans=max(pr,ans);
            }else{
                l=r;
            }
            r++;
        }
        return ans;
    }
};
