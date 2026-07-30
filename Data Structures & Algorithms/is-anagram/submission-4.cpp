class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>counts;
        unordered_map<char,int>countt;
        for(int i=0;i<t.size();i++){
            counts[s[i]]++;
            countt[t[i]]++;
        }
        return counts==countt;
    }
};
