class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()<1)return "";
        string ans;
        for(string &str:strs){
            ans.append(to_string(str.size()));
            ans.push_back('#');
            ans.append(str);
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        if(s.empty())return ans;
            string val;
            int i=0;
            while(i<s.length()){
                int j=i;
                while(s[j]!='#'){
                    j++;
                }
                int length=stoi(s.substr(i,j-i));
                i=j+1;
                j=i+length;
                ans.push_back(s.substr(i,length));
                i=j;
            }
            
        return ans;
    }
};
