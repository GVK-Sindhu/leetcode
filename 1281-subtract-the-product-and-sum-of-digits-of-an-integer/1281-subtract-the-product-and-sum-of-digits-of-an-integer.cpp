class Solution {
public:
    int subtractProductAndSum(int n) {
        int s=0;
        int p=1;
        while(n>0){
            int ld=n%10;
            s+=ld;
            p*=ld;
            n=n/10;
        }
        return p-s;
    }
};