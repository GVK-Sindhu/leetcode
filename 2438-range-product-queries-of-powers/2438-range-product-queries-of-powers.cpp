class Solution {
public:
    const long long mod=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<long long>power;
        vector<int>res;
        for(int i=0;i<32;i++){
            if((n&(1<<i))!=0){//bit is set
                power.push_back(1<<i);
            }
        }
        
        for(auto &it:queries){
            int start=it[0];
            int end=it[1];
            long long p=1;
            for(int i=start;i<=end;i++){
                p=(p*power[i])%mod;
            }
            res.push_back(p);
        }
        return res;
    }
};