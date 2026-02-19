class Solution {
public:
    long long mod=1e9+7;
    int nthMagicalNumber(int n, int a, int b) {
        long long l=min(a,b);
        long long h=1LL*n*min(a,b);
        long long res=0;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long adivisble=mid/a;
            long long bdivisble=mid/b;
            long long lcm=(1LL*a*b)/__gcd(a,b);
            long long bothdivisible=mid/lcm;
            long long ans=adivisble+bdivisble-bothdivisible;
            if(ans>=n){
                res= mid%mod;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};