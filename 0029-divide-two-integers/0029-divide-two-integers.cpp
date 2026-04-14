class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign=true;
        if(dividend>=0 && divisor<0) sign=false;
        else if(dividend<=0 && divisor>0) sign=false;
        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);
        divisor=abs((long long)divisor);
        long quotient=0;
        while(n>=d){
            int c=0;
            while(n>=(d<<(c+1))){
                c+=1;
            }
            quotient+=1<<c;
            n-=(d<<c);
        }
        if(quotient==(1<<31)&& sign){
            return INT_MAX;
        }
         if(quotient==(1<<31)&& !sign){
            return INT_MIN;
        }
        return sign?quotient:-quotient;
    }
};