class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>count(26);
        int n=s.length();
        for(int i=0;i<n;i++){
            count[s[i]-'a']=i;
        }
        int i=0;
        vector<int>ans;
        int start=0,end=0;
        for(int i=0;i<n;i++){
            end=max(end,count[s[i]-'a']);
            if(i==end){
                ans.push_back(end-start+1);
                start=i+1;
            }
        }
        return ans;
    }
};
