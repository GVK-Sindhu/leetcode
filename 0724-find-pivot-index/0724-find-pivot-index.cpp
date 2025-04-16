class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ts=0;
        for(int it:nums){
            ts+=it;
        }
        int ls=0;
        for(int i=0;i<nums.size();i++){
            int rs=ts-ls-nums[i];
            if(rs==ls){
                return i;
            }  
            ls+=nums[i];
        }
        return -1;
    }
};