class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        int n=nums.size();
        if(nums.empty())return 0;
        int longest=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1])continue;
            else if(nums[i]==nums[i-1]+1){
                j++;
            }
            else{
                j=1;
            }
            longest=max(longest,j);
        }
    
        cout<<j<<endl;
        return longest;
    }
};
