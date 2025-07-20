class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int s=0,p=1;
        while(temp>0){
            int ld=temp%10;
            s+=ld;
            p*=ld;
            temp=temp/10;
        }
        cout<<s<<" "<<p;
        if(n%(s+p)==0){
            return true;
        }
        return false;
    }
};