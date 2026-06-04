class Solution {
public:
    int solve(int i,int buy,vector<int>& prices,int n,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        int profit=0;
        if(buy){
            profit=max(-prices[i]+solve(i+1,0,prices,n,dp),solve(i+1,1,prices,n,dp));
        }
        else{
            profit=max(prices[i]+solve(i+1,1,prices,n,dp),solve(i+1,0,prices,n,dp));
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // greedy  optimal o(n) if stock price of tmr greater than today then buy stock today sell tmr
        int res=0;
        for(int i=1;i<n;i++){
            if(prices[i]>=prices[i-1]){
                res+=(prices[i]-prices[i-1]);
            }
        }
        return res;
        // vector<vector<int>>dp(n+1,vector<int>(2,-1));
        // return solve(0,1,prices,n,dp);
        // dp[n][0]=dp[n][1]=0;
        // for(int i=n-1;i>=0;i--){
        //     for(int buy=0;buy<=1;buy++){
        //         long profit=0;
        //         if(buy){
        //             profit=max(-prices[i]+dp[i+1][0],dp[i+1][1]);
        //         }
        //         else{
        //             profit=max(prices[i]+dp[i+1][1],dp[i+1][0]);
        //         }
        //         dp[i][buy]=profit;
        //     }
        // }
        // return dp[0][1];
        // space optimization
        // vector<int>prev(2,0),cur(2,0);
        // prev[0]=prev[1]=0;
        // for(int i=n-1;i>=0;i--){
        //     for(int buy=0;buy<=1;buy++){
        //         long profit=0;
        //         if(buy){
        //             profit=max(-prices[i]+prev[0],prev[1]);
        //         }
        //         else{
        //             profit=max(prices[i]+prev[1],prev[0]);
        //         }
        //         cur[buy]=profit;
        //     }
        //     prev=cur;
        // }
        // return prev[1];
    }
};