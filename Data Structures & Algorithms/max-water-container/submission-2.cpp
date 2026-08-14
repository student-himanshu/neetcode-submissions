class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans=0;
        int l=0,r=heights.size()-1;
        // vector<int>val;
        while(l<r){
            
            int area=min(heights[l],heights[r])*(r-l);
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
