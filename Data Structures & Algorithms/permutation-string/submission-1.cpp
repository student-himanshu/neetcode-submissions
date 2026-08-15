class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      unordered_map<char,int>cnt1;
      for(char c:s1){
        cnt1[c]++;
      }  
      int len1=cnt1.size();
      for(int i=0;i<s2.length();i++){
        unordered_map<char,int>cnt2;
        int cnt=0;
        for(int j=i;j<s2.length();j++){
            char c=s2[j];
            cnt2[c]++;
            if(cnt1[c]==cnt2[c]){
                cnt++;
            }
            if(cnt1[c]<cnt2[c]){
                break;
            }
            if(cnt==len1){
                return true;
            }
        }
      }
      return false;
    }
};
