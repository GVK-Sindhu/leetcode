class Solution {
public:
    int arrangeCoins(int n) {
        int tmp=n;
        int r=0;
        for(int i=0;i<n;i++){
            int req=i+1;
            if(tmp>=req){
                r++;
                tmp-=req;
            }
            else{
                break;
            }
        }
        return r;
    }
};