class Solution {
    bool ispalindrom(string s){
        string s1=s;
        reverse(s1.begin(),s1.end());
        return s1==s;
    }
    void allsubpart(string s,vector<vector<string>>&ans,vector<string>&partition){
        if(s.size()==0){
            ans.push_back(partition);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(ispalindrom(part)){
                partition.push_back(part);
                allsubpart(s.substr(i+1),ans,partition);
                partition.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
       vector<vector<string>>ans;
       vector<string>partition; 
       allsubpart(s,ans,partition);
       return ans;
    }
};
