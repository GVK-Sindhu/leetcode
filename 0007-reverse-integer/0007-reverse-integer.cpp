class Solution {
public:
    int reverse(int x) {
        int rev=0,tmp=x;
        while(tmp!=0){
            int ld=tmp%10;
            tmp/=10;
            if(rev>INT_MAX/10 || rev<INT_MIN/10) return 0;
            rev=(rev*10)+ld;
        }
        return rev;
    }
};