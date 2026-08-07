class Solution {
public:
    bool isPalindrome(string s) {
        string r;
        for(char c:s){
            if(isalnum(c)){
                r+=tolower(c);
            }
        }
        string k=r;
        reverse(r.begin(),r.end());
        return r==k;
    }
};
