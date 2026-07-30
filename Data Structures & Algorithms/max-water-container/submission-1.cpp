class Solution {
public:
    int maxArea(vector<int>& heights) {
        priority_queue<int>pq;
        int n=heights.size();
        for(int i=0;i<heights.size();i++){
            for(int j=n-1;j>i;j--){
                int len =min(heights[i],heights[j]);
                int bre=j - i; 
                pq.push(len*bre);
            }
        }
        return pq.top();
    }
};
