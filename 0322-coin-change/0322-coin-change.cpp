class Solution {
public:
    int solve(int i,vector<int>& nums, int tar,vector<vector<int>>&dp){
        if(tar==0){
            return 0;
        }
        if(i==0){
            if(tar%nums[i]==0){
                return tar/nums[i];
            }
            else{
                return 1e9;
            }
        }
        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }
        int nottake=solve(i-1,nums,tar,dp);
        int take=1e9;
        if(nums[i]<=tar) take=1+solve(i,nums,tar-nums[i],dp);
        return dp[i][tar]=min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        // return solve(n-1,coins,amount,dp)>=1e9?-1:solve(n-1,coins,amount,dp);
        for(int i=1;i<=amount;i++){
            if(i%coins[0]==0){
                dp[0][i]=i/coins[0];
            }
            else{
                dp[0][i]=1e9;
            }
        }
        for(int i=0;i<coins.size();i++){
            dp[i][0]=0;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=amount;j++){
                int nottake=dp[i-1][j];
                int take=1e9;
                if(coins[i]<=j) take=1+dp[i][j-coins[i]];
                dp[i][j]=min(take,nottake);
            }
        }
        return dp[n-1][amount]>=1e9?-1:dp[n-1][amount];

        // space optimization
    }
};