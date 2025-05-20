class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>diff(n,0);
        for(auto &it:queries){
            int start=it[0];
            int end=it[1];
            int x=1;
            diff[start]+=x;
            if((end+1)<n){
                diff[end+1]-=x;
            }
        }
        vector<int>res(n,0);
        int cursum=0;
        for(int i=0;i<n;i++){
            cursum+=diff[i];
            res[i]=cursum;
        }
        for(int i=0;i<n;i++){
            if(res[i]<nums[i]){
                return false;
            }
        }
        return true;
        // vector<int>res;
        // for(int i=0;i<queries.size();i++){
        //     int l=queries[i][0];
        //     int r=queries[i][1];
        //     for(int j=l;j<=r;j++){
        //         nums[j]--;
        //         if(nums[j]<0){
        //             nums[j]=0;
        //         }
        //     }
        // }
        // for(int it:nums){
        //     if(it!=0){
        //         return false;
        //     }
        // }
        // return true;

    }
};