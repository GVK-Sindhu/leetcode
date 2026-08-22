class Solution {
public:
    bool checkDivisibility(int n) {
        int tmp=n;
        int s=0,p=1;
        while(tmp>0)
        {
            s+=tmp%10;
            p*=tmp%10;
            tmp/=10;
        }
        if(n%(s+p)==0){
            return true;
        }
        return false;
    }
};