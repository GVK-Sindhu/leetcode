class Solution {
public:
    int minimumSum(int num) {
        int t=num;
        vector<int>res;
        while(t>0){
            int ld=t%10;
            res.push_back(ld);
            t=t/10;
        }
        sort(res.begin(),res.end());
        int n=res.size()-1;
        int n1=10*res[0]+res[n];
        int n2=10*res[1]+res[n-1];
        return n1+n2;
    }
};