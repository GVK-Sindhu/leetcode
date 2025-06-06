class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(i==k-1){
                res=nums[i];
            }
        }
        return res;
    }
};