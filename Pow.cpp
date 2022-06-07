class Solution {
public:
    double Power(double x,int n){
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n%2!=0)
        return x*Power(x*x,n/2);
        return Power(x*x,n/2);
    }
    double myPow(double x, int n) {
        if(n<0)
        {
            return (1/Power(x,n));
        }
        return Power(x,n);
    }
};