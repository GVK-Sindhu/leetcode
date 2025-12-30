class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int l=0,r=0,zc=0;
        int n=nums.size();
        while(r<n){
           if(nums[r]==0){
             zc++;
           }
           while(zc>k){
             if(nums[l]==0){
                zc--;
             }
             l++;
           }
             maxlen=max(maxlen,(r-l+1));

           r++;
        }
        return maxlen;
    }
};