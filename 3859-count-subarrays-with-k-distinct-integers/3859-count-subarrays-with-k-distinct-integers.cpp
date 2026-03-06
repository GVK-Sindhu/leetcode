class Solution {
public:
    long long count(vector<int>& nums, int k, int m){
        int l=0,r=0,gc=0,distinct=0;
        long long ans=0;
        int n=nums.size();
        long long spc=0;
        unordered_map<int,int>freq;
        while(r<n){
            freq[nums[r]]++;
            if(freq[nums[r]]==1) distinct++;
            if(freq[nums[r]]==m) gc++;
            while(distinct>k){
                if(freq[nums[l]]==m) gc--;
                freq[nums[l]]--;
                if(freq[nums[l]]==0)  {
                    distinct--;
                    freq.erase(nums[l]);
                }
                l++;
                spc=0;
            }
            while(freq[nums[l]]>m){
                    freq[nums[l]]--;
                    l++;
                    spc++;
            }
            if(distinct==k && gc==k){
                ans+=spc+1;
            }
            r++;
        }
        return ans;
    }
    long long countSubarrays(vector<int>& nums, int k, int m) {
        return count(nums,k,m);
    }
};