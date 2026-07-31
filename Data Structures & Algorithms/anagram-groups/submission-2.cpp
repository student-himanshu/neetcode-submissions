class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string i:strs){
           string s=i;
           sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};
