class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size();
        int indexs=-1,minlen=INT_MAX;
        for(int i=0;i<n;i++){
            int cnt=0;
            vector<int> mp(256, 0);
            for(int k=0;k<m;k++){
                mp[char(t[k])]++;
            }
            for(int j=i;j<n;j++){
                if(mp[char(s[j])]>0){
                    cnt++;
                    mp[char(s[j])]--;
                }
                
                if(cnt==m){
                    if(j-i+1<minlen){
                        indexs=i;
                        minlen=j-i+1;
                        break;
                    }
                }
            }
        }
        return (indexs==-1)?"":s.substr(indexs,minlen);
    }
};
