class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num){
            return "";
        }
        string res="";
        for(int i=0;i<num;i++){
            int digi=min(9,sum);
            res+=(digi+'0');
            sum-=digi;
        }
        if(sum>0) return "";
        return res;
    }
};