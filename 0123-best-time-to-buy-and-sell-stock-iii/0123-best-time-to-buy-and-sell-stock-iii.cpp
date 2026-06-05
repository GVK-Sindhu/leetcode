class Solution {
public:
    int solve(int i,int trans,vector<int>& prices,int n,vector<vector<int>>&dp){
        if(i==n || trans==4){
            return 0;
        }
        if(dp[i][trans]!=-1){
            return dp[i][trans];
        }
        int profit=0;
        if(trans%2==0){
            profit=max( -prices[i]+solve(i+1,trans+1,prices,n,dp),
            solve(i+1,trans,prices,n,dp));
        }
        else{
            profit=max( prices[i]+solve(i+1,trans+1,prices,n,dp),
            solve(i+1,trans,prices,n,dp));
        }
        return dp[i][trans]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // vector<vector<int>>dp(n+1,vector<int>(5,0));
        // return solve(0,0,prices,n,dp);
        // base case i==n ,trans==4
        // dp[n][0]=dp[n][1]=dp[n][2]=dp[n][3]=0;
        // for(int i=0;i<n;i++){
        //     dp[i][4]=0;
        // }
        // for(int i=n-1;i>=0;i--){
        //     for(int trans=0;trans<4;trans++){
        //             int profit=0;
        //             if(trans%2==0){
        //                 profit=max(-prices[i]+dp[i+1][trans+1],
        //                 dp[i+1][trans]);
        //             }
        //             else{
        //                 profit=max(prices[i]+dp[i+1][trans+1],
        //                 dp[i+1][trans]);
        //             }
        //             dp[i][trans]=profit;
        //         }
        // }
        // return dp[0][0];
        
        //space optimize
        vector<int>prev(5,0),cur(5,0);
        for(int i=n-1;i>=0;i--){
            for(int trans=0;trans<4;trans++){
                    int profit=0;
                    if(trans%2==0){
                        profit=max(-prices[i]+prev[trans+1],
                        prev[trans]);
                    }
                    else{
                        profit=max(prices[i]+prev[trans+1],
                        prev[trans]);
                    }
                    cur[trans]=profit;
                }
                prev=cur;
        }
        return prev[0];

    }
};
