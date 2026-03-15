class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN,curs=0;
        for(int i=0;i<nums.size();i++){
            if(curs<0) curs=0;
            curs+=nums[i];
            maxi=max(maxi,curs);
        }
        return maxi;
    }
};