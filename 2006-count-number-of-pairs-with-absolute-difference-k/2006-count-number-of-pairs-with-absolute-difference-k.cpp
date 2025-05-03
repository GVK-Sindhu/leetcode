class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<j && abs(nums[i]-nums[j])==k){
                    c++;
                }
            }
        }
        return c;
    }
};