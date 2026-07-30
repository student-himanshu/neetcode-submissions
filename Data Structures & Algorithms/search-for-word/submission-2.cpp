class Solution {
    bool helper(vector<vector<char>>& board, string word,int r,int c,int i){
        if(i==word.size()){
            return true;
        }
        if(r<0 || c<0 || r>=board.size()||c>=board[0].size()||board[r][c]!=word[i]||board[r][c]=='#'){
            return false;
        }
        board[r][c]='#';
        bool res=helper(board,word,r+1,c,i+1) || helper(board,word,r-1,c,i+1)||helper(board,word,r,c+1,i+1)||helper(board,word,r,c-1,i+1);
        board[r][c]=word[i];
        cout<<res<<endl;
        return res;
        
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<board[0].size();j++){
                if(helper(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }   
};
