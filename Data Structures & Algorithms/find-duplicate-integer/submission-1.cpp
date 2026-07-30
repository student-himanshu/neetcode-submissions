class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      unordered_set<int>mp;
      for(int num:nums){
        if(mp.count(num)){
            return num;
            break;
        }
        mp.insert(num);
      }
      return -1;
    }
};
