class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    int res=(nums[i]-1)*(nums[j]-1);
                    if(res>max){
                        max=res;
                    }
                }
            }
        }
        return max;
    }
};