class Solution {
public:
    int minOperations(int n) {
        int s=0;
        for(int i=1;i<=2*n;i+=2){
            s+=i;
        }
        int tar=s/n;
        int op=0;
        for(int i=1;i<=2*n;i+=2){
            if(i<tar){
                op+=(tar-i);
            }
        }
        return op;
    }
};