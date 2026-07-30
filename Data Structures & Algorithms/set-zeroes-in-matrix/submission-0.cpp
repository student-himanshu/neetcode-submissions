class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // int zeros=0;
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>mark=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        mark[k][j]=0;
                    }
                    for(int k=0;k<m;k++){
                        mark[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=mark[i][j];
            }
        }

    }
};
