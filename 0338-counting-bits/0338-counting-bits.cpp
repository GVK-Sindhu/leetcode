class Solution {
public:
    int fun(int i){
        if(i==0)return 0;
        int c=0;
        while(i>0){
            int tmp=i%2;
            if(tmp==1){
                c++;
            }
            i/=2;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int>res(n+1,0);
        for(int i=0;i<=n;i++){
            res[i]=fun(i);
        }
        return res;
    }
};