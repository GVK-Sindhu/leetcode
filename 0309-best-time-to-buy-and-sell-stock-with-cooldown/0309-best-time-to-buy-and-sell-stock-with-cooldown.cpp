class Solution {
public:
    int solve(int i,int buy,vector<int>& prices,vector<vector<int>>&dp){
        if(i>=prices.size()) return 0;
        int profit=0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy){
            profit=max(-prices[i]+solve(i+1,0,prices,dp), solve(i+1,1,prices,dp));
        }
        else{
            profit=max( prices[i]+solve(i+2,1,prices,dp), solve(i+1,0,prices,dp));
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // vector<vector<int>>dp(n+2,vector<int>(2,0));
        // // return solve(0,1,prices,dp);
        // for(int i=n-1;i>=0;i--){
        //     for(int buy=0;buy<2;buy++){
        //          int profit=0;
        //         if(buy){
        //             profit=max(-prices[i]+dp[i+1][0], dp[i+1][1]);
        //         }
        //         else{
        //             profit=max( prices[i]+dp[i+2][1], dp[i+1][0]);
        //         }
        //         dp[i][buy]=profit;
        //     }
        // }
        // return dp[0][1];
        // space optmization
        vector<int>prev2(2,0);
        vector<int>prev1(2,0),cur(2,0);
        for(int i=n-1;i>=0;i--){
                 int profit=0;
                 cur[1]=max(-prices[i]+prev1[0], prev1[1]);
                 cur[0]=max( prices[i]+prev2[1], prev1[0]);
            
            prev2=prev1;
            prev1=cur;
        }
        return prev1[1];
    }
};