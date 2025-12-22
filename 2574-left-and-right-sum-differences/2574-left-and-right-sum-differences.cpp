class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n);
        ps[0]=nums[0];
        if(n==1) return {0};
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        vector<int>res(n);
        res[0]=abs(ps[n-1]-ps[0]);
        for(int i=1;i<n-1;i++){
            res[i]=abs(ps[i-1]-(ps[n-1]-ps[i]));
        }
        res[n-1]=abs(ps[n-2]);
        return res;
    }
};