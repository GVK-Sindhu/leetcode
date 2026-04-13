class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       int n=nums.size();
       vector<int>LIS;
       LIS.push_back(nums[0]);
       for(int i=1;i<n;i++){
         if(LIS.back()<nums[i]){
            LIS.push_back(nums[i]);
         }
         else{
            auto it=lower_bound(LIS.begin(),LIS.end(),nums[i])-LIS.begin();
            LIS[it]=nums[i];
         }
       }
       return LIS.size();
    }
};