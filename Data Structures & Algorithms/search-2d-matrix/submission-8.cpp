class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int l=0,r=m*n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int val=matrix[mid/m][mid%m];
            if(target==val)return true;
            else if(target<val){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};
