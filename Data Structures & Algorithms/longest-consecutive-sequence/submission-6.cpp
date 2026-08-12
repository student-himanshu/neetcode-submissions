class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp(nums.begin(),nums.end());
            int longest=0;
            for(int num:nums){
                if(mp.find(num-1)==mp.end()){
                    int len=1;
                while(mp.find(num+len)!=mp.end()){
                    len++;
                }
                longest=max(longest,len);
                }
            }
        return longest;
    }
};
