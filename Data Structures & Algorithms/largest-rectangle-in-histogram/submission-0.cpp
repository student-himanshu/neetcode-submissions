class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>leftmost(n,-1);
        vector<int>rightmost(n,-1);
        stack<int> stack;
        for(int i=0;i<n;i++){
            while(!stack.empty()&&heights[stack.top()]>=heights[i]){
                stack.pop();
            }
            if(!stack.empty()){
                leftmost[i]=stack.top();
            }
            stack.push(i);
        }
        while(!stack.empty())stack.pop();
        for(int i=n-1;i>=0;i--){
            while(!stack.empty()&&heights[stack.top()]>=heights[i]){
                stack.pop();

            }
            if(!stack.empty()){
                rightmost[i]=stack.top();

            }
            stack.push(i);
        }
        int maxarea=0;
        for(int i=0;i<n;i++){
            int left = (leftmost[i] == -1 ? 0 : leftmost[i] + 1);
            int right = (rightmost[i] == -1 ? n - 1 : rightmost[i] - 1);

            int width = right - left + 1;
            maxarea = max(maxarea, heights[i] * width);
        }
        return maxarea;
    }
};
