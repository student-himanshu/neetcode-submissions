class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size(),m=matrix[0].size();
        int l=0,r=m,top=0,bottom=n;
        while(l<r && top<bottom){
            for(int j=l;j<r;j++){
                    ans.push_back(matrix[top][j]);
            }
            top++;
            for(int j=top;j<bottom;j++){
                    ans.push_back(matrix[j][r-1]);
            }
            r--;
            if(!(l<r && top<bottom)){
                break;
            }
            for(int j=r-1;j>=l;j--){
                    ans.push_back(matrix[bottom-1][j]);
            }
            bottom--;
             for(int j=bottom-1;j>=top;j--){
                    ans.push_back(matrix[j][l]);
            }
            l++;
        }
        return ans;
    }
};
