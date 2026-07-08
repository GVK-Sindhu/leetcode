class Solution {
public:
    const int mod=1e9+7;
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<long long>digi(n,0);
        vector<int>sum(n,0),nz(n,0),pow10(n+1,1);
        for(int i=1;i<=n;i++){
            pow10[i]=(1LL*pow10[i-1]*10)%mod;
        }
        int tmp=s[0]-'0';
        digi[0]=tmp;
        sum[0]=tmp;
        if(tmp>0) nz[0]=1;
        for(int i=1;i<s.size();i++)
        {
            int tmp=s[i]-'0';
            if(tmp!=0){
                digi[i]=(digi[i-1]*10+tmp)%mod;
                nz[i]=nz[i-1]+1;
                sum[i]=sum[i-1]+tmp;
            }
            else{
                digi[i]=digi[i-1];
                nz[i]=nz[i-1];
                sum[i]=sum[i-1];
            }
        }
        vector<int>res(queries.size());
        for(int i=0;i<queries.size();i++){
            int st=queries[i][0];
            int ed=queries[i][1];
            long long digit=digi[ed];
            long long s=sum[ed];
            if(st>0){
                s-=sum[st-1];
                int rem=nz[ed]-nz[st-1];
                digit=(digit-digi[st-1]*pow10[rem])%mod;
                if(digit<0)digit+=mod;
            }
            res[i]=(digit*s)%mod;
        }
        return res;
    }
};