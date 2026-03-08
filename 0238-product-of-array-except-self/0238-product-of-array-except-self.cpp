class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // int tp=1;
        int n=nums.size();
        // int zc=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=0) tp*=nums[i];
        //     else zc++;
        // }
        // vector<int>res(n,0);
        // if(zc<=1){
        //     for(int i=0;i<n;i++){
        //         if(nums[i]==0) res[i]=tp;
        //         else if(zc==0) res[i]=tp/nums[i];
        //     }
        // }
        // return res;
        vector<int>pref(n);
        vector<int>suff(n);
        pref[0]=1;
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]*nums[i-1];
        }
        suff[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            pref[i]=pref[i]*suff[i];
        }
        return pref;
    }
};