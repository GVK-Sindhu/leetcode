class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlen=INT_MAX,s=0;
        int l=0,r=0;
        while(r<n){
            s+=nums[r];
            while(s>=target){
                minlen=min(minlen,(r-l+1));
                s-=nums[l];
                l++;
            }
            r++;
        }
        return minlen==INT_MAX?0:minlen;
    }
};