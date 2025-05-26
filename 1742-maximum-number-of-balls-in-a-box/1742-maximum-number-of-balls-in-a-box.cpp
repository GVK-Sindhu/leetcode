class Solution {
public:
    int ischeck(int n){
        int t=n,res=0;
        while(t>0){
            int ld=t%10;
            res+=ld;
            t=t/10;
        }
        return res;
    }
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>freq;
        for(int i=lowLimit;i<=highLimit;i++){
            int j=ischeck(i);
            freq[j]++;
        }
        int maxf=0;
        for(auto it:freq){
            if(it.second>maxf){
                maxf=it.second;
            }
        }
        return maxf;
    }
};