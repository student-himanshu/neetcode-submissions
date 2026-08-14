class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())return 0;
        int n=height.size();
        int res=0;
        for(int i=0;i<n;i++){
            int lm=height[i];
            int rm=height[i];
            for(int j=0;j<i;j++){
                lm=max(lm,height[j]);
            }
            for(int j=i+1;j<n;j++){
                rm=max(rm,height[j]);
            }
            res+=min(lm,rm)-height[i];
        }
        return res;
    }
};
