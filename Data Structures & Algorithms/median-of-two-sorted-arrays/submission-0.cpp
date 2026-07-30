class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& nums=nums1;

        for(int num:nums2){
            nums.push_back(num);
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%2==1) return nums[n/2];
        else return (nums[(n)/2-1]+nums[(n)/2])/2.0;
    }
};
