class Solution {
public:
    int solve(int i,vector<int>&nums,int tar,vector<vector<int>>&dp){
        if(tar==0) return true;
        if(i==0){
            return nums[0]==tar;
        }
        if(dp[i][tar]!=-1) return dp[i][tar];
        int pick=0;
        if(tar>=nums[i])  pick=solve(i-1,nums,tar-nums[i],dp);
        int notpick=solve(i-1,nums,tar,dp);
        return dp[i][tar]=pick||notpick;
    }
    bool canPartition(vector<int>& nums) {
        int tar=0,n=nums.size();
        for(int it:nums){
            tar+=it;
        }
        if(tar%2!=0) return false;
        vector<vector<int>>dp(n,vector<int>(tar,-1));
        return solve(n-1,nums,tar/2,dp);
    }
};