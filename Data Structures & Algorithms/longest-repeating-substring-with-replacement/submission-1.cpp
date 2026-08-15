class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
            unordered_map<char,int>mp;
            int l=0,maxf=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            maxf=max(maxf,mp[s[i]]);
            while((i-l+1)-maxf>k){
                mp[s[l]]--;
                l++;
            }
            res=max(res,i-l+1);
        }
        return res;
    }
};
