class Solution {
public:
    int solvel(int n,vector<int>&nums,int target){
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
    int solver(int n,vector<int>&nums,int target){
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;
        int sl=solvel(n,nums,target);
        int sr=solver(n,nums,target);
        res.push_back(sl);
        res.push_back(sr);
        return res;
    }
};