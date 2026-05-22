class Solution {
public:
    // memoization
    // int solve(int idx,vector<int>&nums,vector<int>&dp){
    //     if(idx==0){
    //         return dp[idx]=nums[idx];
    //     }
    //     if(idx<0) return 0;
    //     if(dp[idx]!=-1) return dp[idx];
    //     int pick=nums[idx]+solve(idx-2,nums,dp);
    //     int notpick=solve(idx-1,nums,dp);
    //     return dp[idx]=max(pick,notpick);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>dp(n+1,-1);
    //    return solve(n,nums,dp);
    // tabulation
        // dp[0]=nums[0];
        // for(int i=1;i<=n;i++){
        //     int take=nums[i];
        //     if((i-2)>=0) take+=dp[i-2];
        //     int nottake=dp[i-1];
        //     dp[i]=max(take,nottake);
        // }
        // return dp[n];
        //space optimizaion
        int prev1=nums[0];
        int prev2=0;
        for(int i=1;i<=n;i++){
            int take=nums[i];
            if((i-2)>=0) take+=prev2;
            int nottake=prev1;
            int curi=max(take,nottake);
            prev2=prev1;
            prev1=curi;
        }
        return prev1;
    }
};