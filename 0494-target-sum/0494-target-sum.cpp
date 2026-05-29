class Solution {
public:
    int solve(int i,vector<int>& nums,int tar,vector<vector<int>>&dp){
        // if(tar==0){
        //     return 1;
        // }
        if(i==0){
            if(nums[i]==0 && tar==0) return 2;
            if(tar==0 || tar==nums[i]) return 1;
            return 0;
        }
        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }
        int notpick=solve(i-1,nums,tar,dp);
        int pick=0;
        if(tar>=nums[i]){
            pick=solve(i-1,nums,tar-nums[i],dp);
        }
        return dp[i][tar]=pick+notpick;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int ts=0;
        for(int it:nums){
            ts+=it;
        }
        if((ts-target)<0 || (ts-target)%2!=0) return 0;
        int tar=(ts-target)/2;
        vector<vector<int>>dp(n,vector<int>(tar+1,0));
        // return solve(n-1,nums,tar,dp);
        if(nums[0]==0) dp[0][0]=2;
        else   dp[0][0]=1;
        if(tar>=nums[0] && nums[0]!=0){
                dp[0][nums[0]]=1;
         }
         for(int i=1;i<n;i++){
            for(int j=0;j<=tar;j++){
                int notpick=dp[i-1][j];
                int pick=0;
                if(j>=nums[i]){
                    pick=dp[i-1][j-nums[i]];
                }
                dp[i][j]=pick+notpick;
            }
         }
         return dp[n-1][tar];
    }
};