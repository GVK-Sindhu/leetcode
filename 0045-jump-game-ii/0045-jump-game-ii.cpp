class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0,far=0,jumps=0;
        //check valid window like check farthest point is taken and l= valid window+1; r=farthest
        while(r<n-1){
            for(int i=l;i<=r;i++){
                far=max(far,i+nums[i]);
            }
            l=r+1;
            r=far;
            jumps++;
        }
        return jumps;
    }
};