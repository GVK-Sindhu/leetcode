class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int tp=1;
        int zc=0;
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                tp*=nums[i];
            }
            else{
                zc++;
            } 
        }
        for (int i = 0; i < n; i++) {
            if (zc > 1) {
                res[i] = 0;
            } else if (zc == 1) {
                if (nums[i] == 0)
                    res[i] = tp;
                else
                    res[i] = 0;
            } else {
                res[i] = tp / nums[i];
            }
        }
        return res;
    }
};