class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tp=1;
        int n=nums.size();
        int zc=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) tp*=nums[i];
            else zc++;
        }
        vector<int>res(n,0);
        if(zc<=1){
            for(int i=0;i<n;i++){
                if(nums[i]==0) res[i]=tp;
                else if(zc==0) res[i]=tp/nums[i];
            }
        }
        return res;
    }
};