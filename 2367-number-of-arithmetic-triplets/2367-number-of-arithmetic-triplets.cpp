class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int c=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i<j && j<k){
                        if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
                            c=c+1;
                        }
                    }
                }
            }
        }
        return c;
        
    }
};