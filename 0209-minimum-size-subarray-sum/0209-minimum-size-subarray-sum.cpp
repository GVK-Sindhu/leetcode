class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlen=INT_MAX,len=0;
        int l=0,r=0,s=0;
        while(r<n){
            s+=nums[r];
            while(s>=target){
            len=(r-l+1);
            cout<<len<<s<<" ";
            minlen=min(minlen,len);
                s-=nums[l];
                l++;  
            }
            r++;
        }
        return minlen==INT_MAX?0:minlen;
    }
};