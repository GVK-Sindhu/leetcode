class Solution {
public:
    int getfreq(int n){
        int num=0;
        while(n>0){
            num+=pow(10,n%10);
            n/=10;
        }
        return num;
    }
    bool reorderedPowerOf2(int n) {
        int input=getfreq(n);
        for(int i=0;i<=29;i++){
            if(input==getfreq(1<<i)){
                return true;
            }
        }
        return false;
    }
};