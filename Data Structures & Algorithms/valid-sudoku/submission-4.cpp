class Solution {
    private:
    bool isvalid(int r,int c,int val,vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            if(board[r][i]==val && i!=c){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][c]==val && i!=r){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            int x=3*(r/3)+i/3;
            int y=3*(c/3)+i%3;
            if(board[x][y]==val&&x!=r&&y!=c){
                return false;
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               if (board[i][j] != '.') {
                    if (!isvalid(i, j, board[i][j], board)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
