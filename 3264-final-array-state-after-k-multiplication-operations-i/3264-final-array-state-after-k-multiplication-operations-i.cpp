class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int min_ind=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[min_ind]){
                    min_ind=j;
                }
            }
             nums[min_ind]*=multiplier;
        }
        return nums;
    }
};