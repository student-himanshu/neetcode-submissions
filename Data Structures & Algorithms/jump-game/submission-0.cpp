class Solution {
public:
    bool canJump(vector<int>& nums) {
        int finalposition=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]+i>=finalposition){
                finalposition=i;
                cout<<finalposition<<endl;
            }
        }
        return finalposition == 0;
    }
};
