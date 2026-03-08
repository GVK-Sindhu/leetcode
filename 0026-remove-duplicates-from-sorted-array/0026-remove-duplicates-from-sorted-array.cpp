class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        nums[j]=nums[0];
        j++;
        for(int i=0;i<nums.size();i++){
            if(nums[j-1]!=nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};