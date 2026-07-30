class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int  sum =1;
        int zeros=0;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
            if (nums[i] == 0)
                zeros++;
            else
                sum *= nums[i];

        }
        vector<int>ans(n,0);
            if(zeros>1){
                return ans;
            }
        for(int i=0;i<nums.size();i++){
            if (zeros == 1) {
                ans[i] = (nums[i] == 0) ? sum : 0;
            } else { // no zeros
                ans[i] = sum / nums[i];
            }
        }
        return ans;

    }
};
