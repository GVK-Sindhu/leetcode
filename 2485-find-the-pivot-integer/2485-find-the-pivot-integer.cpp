class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++){
            int ls=0;
            int rs=0;
            for(int j=1;j<=i;j++){
                ls+=j;
            }
            for(int k=i;k<=n;k++){
                rs+=k;
            }
            if(ls==rs){
                return i;
            }
        }
        return -1;
    }
};