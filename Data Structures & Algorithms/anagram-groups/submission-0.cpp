class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>res;
        for( auto & s:strs){
            string S=s;
            sort(S.begin(),S.end());
            res[S].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto &pair:res){
          ans.push_back(pair.second)  ;
        }
        return ans;
    }
};
