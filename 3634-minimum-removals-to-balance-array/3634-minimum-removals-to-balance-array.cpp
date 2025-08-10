class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        int n=nums.size();
        int res=0;
        for(int j=0;j<n;j++){
            while((long long)nums[j]>(long long)k*nums[i]){
                i++;
            }res=max(res,(j-i+1));
        }
        return n-res;
    }
};