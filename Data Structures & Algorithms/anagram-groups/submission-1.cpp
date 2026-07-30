class Solution {

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>mp;
        
        for(string s:strs){
            string str=s;
            sort(str.begin(),str.end());
            mp[str].push_back(s);
            
        }
        vector<vector<string>>ans;
        for(auto m:mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};
