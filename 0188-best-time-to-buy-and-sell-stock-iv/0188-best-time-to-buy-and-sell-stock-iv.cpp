class Solution {
public:
    int solve(int i,int trans,int k,vector<int>& prices,vector<vector<int>>&dp){
        if(i==prices.size() || trans==(2*k) ) return 0;
        int profit=0;
        if(dp[i][trans]!=-1) return dp[i][trans];
        if(trans%2==0){
            profit=max( -prices[i]+solve(i+1,trans+1,k,prices,dp), solve(i+1,trans,k,prices,dp));
        }
        else{
            profit=max( prices[i]+solve(i+1,trans+1,k,prices,dp), solve(i+1,trans,k,prices,dp));
        }
        return dp[i][trans]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2*k,-1));
        return solve(0,0,k,prices,dp);
    }
};