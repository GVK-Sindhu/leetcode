class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.size()<4){
            return 0;
        }
        return (nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
    }
};