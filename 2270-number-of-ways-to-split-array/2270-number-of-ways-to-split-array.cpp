class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        auto ts=0;
        for(long long it:nums){
            ts+=it;
        }
        long long ls=0,rs=0,split=0;
        for(auto i=0;i<nums.size()-1;i++){
            ls+=nums[i];
            ts-=nums[i];
            if(ls>=ts){
                split++;
            }
        }
        return split;
    }
};