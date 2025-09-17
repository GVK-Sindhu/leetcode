class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(find(res.begin(),res.end(),nums[i])==res.end()){
            res.push_back(nums[i]);
            if(res.size()==k) break;
            }
        }
        return res;
    }
};