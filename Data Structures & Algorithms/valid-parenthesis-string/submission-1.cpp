class Solution {
public:
    bool checkValidString(string s) {
        int mina=0,maxa=0;
        for(char c:s){
            if(c=='('){
                mina++;
                maxa++;
            }
            else if(c==')'){
                mina--;
                maxa--;
            }
            else{
                mina--;
                maxa++;
            }
            if(maxa<0){
                return false;
            }
            if(mina<0){
                mina=0;
            }
        }
        return mina==0;
    }
};
