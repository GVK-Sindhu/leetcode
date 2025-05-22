class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i=0;i<nums.size()-1;i+=2){
            int ans=min(nums[i],nums[i+1]);
            res.push_back(ans);
        }
        int s=0;
        for(int it:res){
            s+=it;
        }
        return s;
    }
};