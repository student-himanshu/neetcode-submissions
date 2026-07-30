class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int minprice=INT_MAX;
        for(int price:prices){
            minprice=min(price,minprice);
            maxi=max(maxi,price-minprice);
        }
        return maxi;
    }
};
