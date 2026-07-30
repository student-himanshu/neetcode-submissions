class Solution {
        vector<string>val={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
    private:
    void backtrack(int i,string curstr,string digits){
        if(curstr.size()==digits.size()){
            res.push_back(curstr);
            return;
        }
        string chars=val[digits[i]-'0'];
        for(char c:chars){
            backtrack(i+1,curstr+c,digits);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return res;
        backtrack(0,"",digits);
        return res;
    }
};
