class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size();
        for(int i=0;i<r;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
