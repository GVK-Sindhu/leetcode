class Solution {
public:
    int maxSum(vector<int>& nums) {
        int s=0;
        int nc=0;
        int maxi=INT_MIN;
        set<int>u;
        if(nums.size()==1){
            s+=nums[0];
        }
        else{
            for(int it:nums){
            if(it<=0){
                nc++;
                maxi=max(maxi,it);
                continue;
            }
            else{
                u.insert(it);
            }
            }
        }
        if(nc==nums.size()){
            s+=max;
        }
        else{
        for(int it:u){
            s+=it;
        }}
        return s;
    }
};