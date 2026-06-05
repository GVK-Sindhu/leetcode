class Solution {
public:
    int solve(int i,int buy,int trade,vector<int>& prices,int n,vector<vector<vector<int>>>&dp){
        if(i==n){
            return 0;
        }
        if(trade==0){
            return 0;
        }
        if(dp[i][buy][trade]!=-1){
            return dp[i][buy][trade];
        }
        int profit=0;
        if(buy){
            profit=max( -prices[i]+solve(i+1,0,trade,prices,n,dp),
            solve(i+1,1,trade,prices,n,dp));
        }
        else{
            profit=max( prices[i]+solve(i+1,1,trade-1,prices,n,dp),
            solve(i+1,0,trade,prices,n,dp));
        }
        return dp[i][buy][trade]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        // // return solve(0,1,2,prices,n,dp);
        // // base case i==0 ,trade==0
        // for(int buy=0;buy<2;buy++){
        //     for(int trade=0;trade<3;trade++){
        //         dp[n][buy][trade]=0;
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     for(int buy=0;buy<2;buy++){
        //         dp[i][buy][0]=0;
        //     }
        // }
        // for(int i=n-1;i>=0;i--){
        //     for(int buy=0;buy<2;buy++){
        //         for(int trade=1;trade<3;trade++){
        //             int profit=0;
        //             if(buy){
        //                 profit=max(-prices[i]+dp[i+1][0][trade],
        //                 dp[i+1][1][trade]);
        //             }
        //             else{
        //                 profit=max(prices[i]+dp[i+1][1][trade-1],
        //                 dp[i+1][0][trade]);
        //             }
        //             dp[i][buy][trade]=profit;
        //         }
        //     }
        // }
        // return dp[0][1][2];
        // space optimize

        vector<vector<int>>prev(2,vector<int>(3,0)),cur(2,vector<int>(3,0));
        for(int buy=0;buy<2;buy++){
            for(int trade=0;trade<3;trade++){
               prev[buy][trade]=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int buy=0;buy<2;buy++){
                prev[buy][0]=0;
                cur[buy][0]=0;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<2;buy++){
                for(int trade=1;trade<3;trade++){
                    int profit=0;
                    if(buy){
                        profit=max(-prices[i]+prev[0][trade],
                        prev[1][trade]);
                    }
                    else{
                        profit=max(prices[i]+prev[1][trade-1],
                        prev[0][trade]);
                    }
                    cur[buy][trade]=profit;
                }
            }
            prev=cur;
        }
        return prev[1][2];
    }
};
