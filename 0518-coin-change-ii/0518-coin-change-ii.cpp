class Solution {
public:
    int solve(int idx,vector<int>&coins,int amount,vector<vector<int>>&dp){
        if(idx==0){
            return (amount%coins[0]==0);
        }
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        int nottake=solve(idx-1,coins,amount,dp);
        int take=0;
        if(coins[idx]<=amount){
            take=solve(idx,coins,amount-coins[idx],dp);
        }
        return dp[idx][amount]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
         int n=coins.size();
         vector<vector<int>>dp(n,vector<int>(amount+1,0));
        // return solve(n-1,coins,amount,dp);
        //base case 
        for(int i=0;i<=amount;i++){
            dp[0][i]=(i%coins[0]==0);
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                long long nottake=dp[i-1][j];
                long long take=0;
                if(coins[i]<=j) take=dp[i][j-coins[i]];
                dp[i][j]=take+nottake;
            }
        }
        return dp[n-1][amount];
    }
};