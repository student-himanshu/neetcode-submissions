class Solution {
public:
    bool isPalindrome(string s) {
        string val="";
        for(char &c:s){
            if(isalnum(c)){
                val+=tolower(c);
            }
        }
        string st=val;
        reverse(st.begin(),st.end());
        return st==val;
    }
};
