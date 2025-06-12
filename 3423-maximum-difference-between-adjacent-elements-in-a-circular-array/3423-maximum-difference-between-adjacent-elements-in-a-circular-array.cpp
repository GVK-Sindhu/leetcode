class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxd=0;
        int n=nums.size();
        int lc=0;
        for(int i=0;i<n-1;i++){
            if(maxd<abs(nums[i]-nums[i+1])){
                maxd=abs(nums[i]-nums[i+1]);
            }
        }
        lc=abs(nums[n-1]-nums[0]);
        if(maxd<lc){
            maxd=lc;
        }
        return maxd;
    }
};