class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=0;
        for(int it:nums){
            maxor |=it;
        }
        int n=nums.size();
        int c=0;
        for(int mask=1;mask<(1<<n);mask++){
            int curor=0;
            for(int i=0;i<n;i++){
                if(mask&(1<<i)){
                    curor|=nums[i];
                }
            }
            if(curor==maxor){
                c++;
            }
        }
        return c;
    }
};