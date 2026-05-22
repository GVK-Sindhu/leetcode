class Solution {
public:
    int solve(int st,int ed,vector<int>&nums){
        int prev1=nums[st];
        int prev2=0;
        for(int i=st+1;i<=ed;i++){
            int take=nums[i];
            if(i-2>=st) take+=prev2;
            int nottake=prev1;
            int curi=max(take,nottake);
            prev2=prev1;
            prev1=curi;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        if(nums.size()==1) return nums[0];
        int s1=solve(1,n,nums);
        int s2=solve(0,n-1,nums);
        return max(s1,s2);
    }
};