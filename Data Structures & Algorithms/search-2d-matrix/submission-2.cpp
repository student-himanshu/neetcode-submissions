class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int r=0, n=matrix[0].size();
       int m=matrix.size(); 
       int c=n-1;
       while(r<m && c>=0){
            if(matrix[r][c]>target){
                c--;
            } 
            else if(matrix[r][c]<target){
                r++;
            }    
            else{
                return true;

            } 

       }
       return false;
    }
};
