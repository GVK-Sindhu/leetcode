class Solution {
public:
    int solve(int idx,vector<int>&nums){
        if(idx>=nums.size()){
            return 0;
        }
        return max(solve(idx+1,nums,dp),nums[idx]+solve(idx+2,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int>dp(n,-1);
        return solve(0,nums,dp);
    }
};