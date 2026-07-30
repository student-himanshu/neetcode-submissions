class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for (char& c : s) {
            if(isalnum(c)){
                ans+=tolower(c);
            }
        }
        int j=ans.length()-1;
        int i=0;
        while(i<j){
            if(ans[i]!=ans[j] ){
                return false;
                break;
            }
            i++;
            j--;
        }
        return true;
    }
};
