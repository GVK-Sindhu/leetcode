class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second==1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};