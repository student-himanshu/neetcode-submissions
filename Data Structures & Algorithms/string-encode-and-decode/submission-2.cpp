class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()<1)return "";
        string ans;
        for(string str:strs){
            ans+= "+";
            ans+=str;
        }
        ans+="+";
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        if(s.empty())return ans;
            string val;
        for(int i=1;i<s.size();i++){
            if(s[i]=='+'){
                ans.push_back(val);
                val="";
            }
            else{
                val+=s[i];
            }
            
        }
        return ans;
    }
};
