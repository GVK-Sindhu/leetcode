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
        return solve(n-1,coins,amount,dp)>=1e9?-1:solve(n-1,coins,amount,dp);
    }
};