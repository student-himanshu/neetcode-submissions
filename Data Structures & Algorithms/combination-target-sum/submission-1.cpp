class Solution {
    set<vector<int>>s;
    void combine(vector<int>& nums, int target, vector<vector<int>>&ans,vector<int>&cur,int i){
        if(target==0 ){
            if(s.find(cur)==s.end()){
                ans.push_back(cur);
                s.insert(cur);
            }
            return;
        }
        if(target<0 || i>=nums.size()){
            return;
        }
        cur.push_back(nums[i]);
        combine(nums,target-nums[i],ans,cur,i+1);
        combine(nums,target-nums[i],ans,cur,i);
        cur.pop_back();
        combine(nums,target,ans,cur,i+1);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
       vector<vector<int>>ans;
       vector<int>cur;
       combine(nums,target,ans,cur,0); 
       return ans;
    }
};
