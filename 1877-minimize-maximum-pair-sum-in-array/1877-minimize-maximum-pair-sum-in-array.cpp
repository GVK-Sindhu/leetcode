class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>sumpairs;
        int n=nums.size();
        int l=0,r=n-1;
        for(int i=0;i<nums.size()/2;i++){
            sumpairs.push_back(nums[l]+nums[r]);
            l++;
            r--;
        }
        int maxres=0;
        for(int it:sumpairs){
            maxres=max(maxres,it);
        }
        return maxres;
    }
};