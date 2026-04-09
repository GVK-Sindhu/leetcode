class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(freq[target-nums[i]] && (freq[target-nums[i]]!=i)){
                return {i,freq[target-nums[i]]};
            }
        }
        return {-1,-1};
    }
};