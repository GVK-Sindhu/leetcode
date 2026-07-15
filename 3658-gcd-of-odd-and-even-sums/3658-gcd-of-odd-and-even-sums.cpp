class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so=0,se=0;
        for(int i=1;i<=(2*n);i++){
            if(i%2==1){
                so+=i;
            }
            else{
                se+=i;
            }
        }
        int res=__gcd(so,se);
        return res;
    }
};