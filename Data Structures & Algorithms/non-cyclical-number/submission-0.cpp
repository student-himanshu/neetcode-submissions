class Solution {
    private:
    int sumofs(int n){
        int output=0;
        while(n!=0){
            output+=(n%10)*(n%10);
            n/=10;
        }
        return output;
    }
public:
    bool isHappy(int n) {
        int slow=n,fast=sumofs(n);
        while(slow!=fast){
            fast=sumofs(fast);
            fast=sumofs(fast);
            slow=sumofs(slow);
        }
        return fast==1;
    }

};
