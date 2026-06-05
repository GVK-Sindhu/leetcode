class Solution {
public:
    int solve(int i,int prv,vector<int>& nums,vector<vector<int>>&dp){
        if(i==nums.size()) return 0;
        if(dp[i][prv+1]!=-1) return dp[i][prv+1];
        int nottake=solve(i+1,prv,nums,dp);
        int take=0;
        
        if(prv==-1 || nums[i]>nums[prv]){
            take=1+solve(i+1,i,nums,dp);
        }
        return dp[i][prv+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        // return solve(0,-1,nums,dp);
        for(int prvi=0;prvi<n;prvi++){
            dp[n][prvi]=0;
        }
        for(int i=n-1;i>=0;i--){
            for(int prvi=i-1;prvi>=-1;prvi--){
                int nottake=dp[i+1][prvi+1];
              int take=0;
        
            if(prvi==-1 || nums[i]>nums[prvi]){
                take=1+dp[i+1][i+1];
            }
              dp[i][prvi+1]=max(take,nottake);
            }
        }
        return dp[0][0];
    }
};