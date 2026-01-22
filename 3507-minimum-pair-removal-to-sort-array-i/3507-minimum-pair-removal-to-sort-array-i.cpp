class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int res=0;
        while(true){
        int n=nums.size();
            bool inc=true;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    inc=false;
                    break;
                }
            }
            if(inc) return res;
            int mins=1000000,idx=-1;
            for(int i=0;i<n-1;i++){
                if(nums[i]+nums[i+1]<mins){
                    mins=(nums[i]+nums[i+1]);
                    idx=i;
                }
            }
            nums[idx]=nums[idx]+nums[idx+1];
            nums.erase(nums.begin()+idx+1);
            res++;
        }
        
    }
};