class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        v.push_back(0);
        for(int i=1;i<=n;i++){
            int cnt=0;
            int j=i;
            while(j>1){
                cnt+=j&1;
                j=j>>1;
            }
            if(j==1)cnt++;
            v.push_back(cnt);
        }
      
      return v;
    }
};
