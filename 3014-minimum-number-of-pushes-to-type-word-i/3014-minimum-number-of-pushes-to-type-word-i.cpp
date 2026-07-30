class Solution {
public:
    int minimumPushes(string word) {
        int res=0,n=word.size();
        int c=1;
        while(n>=8){
            res+=(8*c);
            c++;
            n-=8;
        }
        if(n<8){
            res+=(n*c);
        }
        if(res>0){
            return res;
        }
       return -1;
    }
};