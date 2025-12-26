class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]<n && nums[i]!=nums[nums[i]-1] ){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=(i+1)){
                res=i+1;
                break;
            }
        }
        if(res==0){
            res=n+1;
        }
        return res;
    }
};