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
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,1,2,prices,n,dp);
    }
};
