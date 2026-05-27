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
        tar=tar/2;
        vector<vector<bool>>dp(n,vector<bool>(tar+1,false));
        // return solve(n-1,nums,tar/2,dp);
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]<=tar) dp[0][nums[0]]=true;
        for(int i=1;i<n;i++){
           for(int t=1;t<=tar;t++){
               int pick=0;
                if(t>=nums[i]) pick=dp[i-1][t-nums[i]];
                int notpick=dp[i-1][t];
                dp[i][t]=pick||notpick;
           }
        }
        return dp[n-1][tar];
    }
};