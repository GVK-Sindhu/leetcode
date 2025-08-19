class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int c=0;
        long long res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            else{
                c=0;
            }
            res+=c;
        }
        return res;
    }
};