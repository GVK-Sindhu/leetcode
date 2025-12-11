class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int s=0;
        int n=nums.size(),m=nums[0].size();
        for(auto &it:nums){
            sort(it.begin(),it.end(),greater<int>());
        }
        for(int i=0;i<m;i++){
          int maxi=0;
            for(int j=0;j<n;j++){
                maxi=max(maxi,nums[j][i]);
            }
            cout<<maxi<<" ";
            s+=maxi;
        }
        return s;
    }
};