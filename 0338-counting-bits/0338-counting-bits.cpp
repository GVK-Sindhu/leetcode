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
        // vector<int>res(n+1,0);
        // for(int i=0;i<=n;i++){
        //     res[i]=fun(i);
        // }
        // return res;
        vector<int>dp(n+1,0);
        for(int i=1;i<=n;i++){
            dp[i]=dp[i>>1]+(i&1);
        }
        return dp;
    }
};

// Main DP Relation
// For any number i:

// dp[i]=dp[i/2]+(i%2)

// or bitwise:

// dp[i]=dp[i>>1]+(i&1)

// Here:
// i >> 1 = remove last binary bit
// i & 1 = tells whether last bit is 1 or 0
// Example:

// i = 13

// Binary:

// 13 = 1101

// Now:

// 13 >> 1 = 110 = 6

// We already know:

// dp[6] = 2

// Last bit:

// 13 & 1 = 1

// So:

// dp[13] = dp[6] + 1
//        = 2 + 1
//        = 3