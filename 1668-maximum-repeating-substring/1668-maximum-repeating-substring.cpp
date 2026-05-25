class Solution {
public:
    int maxRepeating(string seq, string word) {
        int n=seq.length();
        int m=word.length();
        vector<int>dp(n+1,0);
        int res=0;
        for(int i=m;i<=n;i++){
            if(seq.substr(i-m,m)==word){
                dp[i]=dp[i-m]+1;
                res=max(res,dp[i]);
            }
        }
        return res;
    }
};

// word=cream (5)
// 012 34567 89101112  34567
// ice cream cream     cream

// dp[0]...dp[4] =0
// we will start from dp[5] 
// 5-5=0 check 0->5 is match word no so dp[5]=0

// at dp[7] 7-5=2 from 2to 7 but we want from 3to 7?
// at dp[8] 8-5=3 from 3to 7 dp[8]=1

// then again at dp[13] 13-5=8 from 8 to 12 dp[13]=1+dp[8]=1+1=2

// at dp[18] 18-5=13 from 13 to 17 dp[18]=1+dp[13]=1+2=3;