class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n,0);
        pref[0]=nums[0];
        for(int i=1;i<pref.size();i++){
            pref[i]=pref[i-1]+nums[i];
        }
        vector<int>res(n,0);
        for(int i=0;i<n;i++){
            int ls=pref[i]-nums[i];
            int rs=pref[n-1]-pref[i];
            res[i]=abs(ls-rs);
        }
        return res;
    }
};