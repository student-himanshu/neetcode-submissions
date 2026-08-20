class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size();
        int l=0,r=0,cnt=0,indexs=-1,minlen=INT_MAX;
            vector<int> mp(256, 0);
            for(int k=0;k<m;k++){
                mp[t[k]]++;
            }

            while(r<n){
                if(mp[s[r]]>0){
                    cnt++;
                }
                mp[s[r]]--;
                while(cnt==m){
                    if(r-l+1<minlen){
                        minlen=r-l+1;
                        indexs=l;
                    }
                    mp[s[l]]++;
                    if(mp[s[l]]>0){
                        cnt--;
                    }
                    l++;
                }
                r++;
            }
        
        return (indexs==-1)?"":s.substr(indexs,minlen);
    }
};
