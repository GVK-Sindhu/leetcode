class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>lefts;
        vector<int>rights(n);
        int lsum=0;
        int rsum=0;
        for(auto it:nums){
            lefts.push_back(lsum);
            lsum+=it;
        }
        for(int i=n-1;i>=0;i--){
            rights[i]=rsum;
            rsum+=nums[i];
        }
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=abs(lefts[i]-rights[i]);
        }
        return res;
    }
};