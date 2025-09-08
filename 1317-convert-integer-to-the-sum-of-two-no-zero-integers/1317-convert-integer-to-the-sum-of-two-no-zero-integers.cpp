class Solution {
public:
    bool checkzero(int n){
        while(n>0){
            int rem=n%10;
            if(rem==0){
                return true;
            }
            else{
                n/=10;
            }
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<=n;i++){
            int a=i;
            int b=n-i;
            if(!checkzero(a) && !checkzero(b)){
                return {a,b};
            }
        }
       
        return {};
    }
};