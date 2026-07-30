class Solution {
public:
    double myPow(double x, int n) {
        double val=1;
        int pwd=abs(n);
        for(int i=0;i<pwd;i++){
            val*=x;
            cout<<val<<endl;
        }
        if(n<0)val= 1/val;
         return val;
    }
};
