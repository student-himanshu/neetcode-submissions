class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int res=0;
        for(int i=0;i<n;i++){
            unordered_set<char>set;
            for(int j=i;j<n;j++){
                if(set.find(s[j])!=set.end()){
                    break;
                }
                set.insert(s[j]);

            }
            res=max(res,(int)set.size());
        }
        return res;
    }
};
