class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int l=0,r=0;
        long long p=1;
        int c=0;
        while(r<n){
            p*=nums[r];
            while(p>=k){
                p/=nums[l];
                l++;
            }
            if(p<k){
                c+=(r-l+1);
            }
            r++;
        }
        return c;
    }
};