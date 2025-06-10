class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int minl=INT_MAX;
        int n=nums.size();
        int s=0;
        while(j<n){
            s+=nums[j];
            while(s>=target){
                minl=min(minl,(j-i+1));
                s-=nums[i];
                i++;
            }
            j++;
        }
        return minl==INT_MAX?0:minl;
    }
};