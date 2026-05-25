class Solution {
public:
    unordered_map<int,int>dp;
    int ispow(int x){
        if(x==1) return 0;
        if(dp.count(x)){
            return dp[x];
        }
        if(x%2==0){
            return dp[x]=1+ispow(x/2);
        }
        return dp[x]=1+ispow(3*x+1);
    }
    int getKth(int lo, int hi, int k) {
        vector<pair<int,int>>tmp;
        for(int i=lo;i<=hi;i++){
           tmp.push_back({ispow(i),i});
        }
        sort(tmp.begin(),tmp.end());
        return tmp[k-1].second;
    }
};