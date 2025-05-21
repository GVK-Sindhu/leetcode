class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=-1,end=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                start=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                end=i;
                break;
            }
        }
        return {start,end};
        // int l=0,r=n-1;
        // int res=-1,res1=-1;
        // vector<int>ans;
        // while(l<=r){
        //     int mid=(l+(r-l))/2;
        //     if(nums[mid]==target){
        //          res=mid;
        //     }
        //     else if(nums[mid]<target){
        //         l=mid+1;
        //     }
        //     else{
        //         r=mid-1;
        //     }
        // }
        // ans.push_back(res);
        // ans.push_back(res1);
        // return ans;
    }
};