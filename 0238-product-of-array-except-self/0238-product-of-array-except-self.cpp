class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int zc=0;
        int p=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                p*=nums[i];
            }
            else{
                zc++;
            }
        }
        if(zc>2){
            return res;
        }
        for(int i=0;i<n;i++){
           if(nums[i]==0){
                    res[i]=p;
            }
            else if(zc==0){
                res[i]=p/nums[i];
            }
        }
        return res;
    }
};