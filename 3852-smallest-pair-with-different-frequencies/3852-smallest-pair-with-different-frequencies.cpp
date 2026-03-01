class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int it:nums){
            freq[it]++;
        }
        sort(nums.begin(),nums.end());
        vector<int>res(2,-1);
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j] && freq[nums[i]]!=freq[nums[j]]){
                    res[0]=(nums[i]);
                    res[1]=(nums[j]);
                    return res;
                }
            }
        }
        return res;
    }
};