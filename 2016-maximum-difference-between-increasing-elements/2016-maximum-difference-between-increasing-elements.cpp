class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int diff=0;
        int maxdiff=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j && nums[i]<nums[j]){
                    diff=nums[j]-nums[i];
                    maxdiff=max(maxdiff,diff);
                }
            }
        }
        return maxdiff;
    }
};