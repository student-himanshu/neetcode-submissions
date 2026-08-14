class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int l=0,r=heights.size()-1;
        // vector<int>val;
        while(l<r){
            int b=r-l;
            int h=min(heights[l],heights[r]);
            int area=h*b;
            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
            ans=max(area,ans);

        }
        return ans;
    }
};
