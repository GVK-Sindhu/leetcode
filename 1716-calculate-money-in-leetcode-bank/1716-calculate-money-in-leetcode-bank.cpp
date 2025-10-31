class Solution {
public:
    int totalMoney(int n) {
        int s=0;
        int mondayc=1;
        while(n>0){
          int c=mondayc;
           for(int i=0;i<min(7,n);i++){
                s+=c;
                c++;
            }
            mondayc++;
            n-=7;
        }
        return s;
    }
};