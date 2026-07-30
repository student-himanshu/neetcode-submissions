class Solution {
    set<vector<int>>s;

    void combine(vector<int>& candidates, int target, vector<vector<int>>&ans,vector<int>& cur,int i){
        if(target==0){
            if(s.find(cur)==s.end()){
                s.insert(cur);
                ans.push_back({cur});
            }
            return ;
        }
        
        if(target<0 || i>=candidates.size()){
           return;
        }
        cur.push_back(candidates[i]);
        combine(candidates,target-candidates[i],ans,cur,i+1);
        cur.pop_back();
        combine(candidates,target,ans,cur,i+1);
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>cur;
        combine(candidates,target,ans,cur,0);
        return ans;

    }
};
