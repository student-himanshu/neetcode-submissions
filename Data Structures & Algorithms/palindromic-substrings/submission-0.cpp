class Solution {
    private:
    bool isvalid(string st){
        string s=st;
        reverse(st.begin(),st.end());
        return st==s;
    }
public:
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++){

            for(int j=i;j<n;j++){
                string st=s.substr(i,j-i+1);
                if(isvalid(st)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
