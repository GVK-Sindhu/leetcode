class Solution {
public:
    // int solve(int idx,vector<int>&nums){
    //     if(idx>=nums.size()){
    //         return 0;
    //     }
    //     return max(solve(idx+1,nums),nums[idx]+solve(idx+2,nums));
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+2);
        dp[n+1]=0;
        dp[n]=0;
        for(int i=n-1;i>=0;i--){
            dp[i]=max(dp[i+1],dp[i+2]+nums[i]);
        }
        return dp[0];
    }
};