class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long max_=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i<j && j<k){
                        long long res=(nums[i]-nums[j])*nums[k];
                        max_=max(res,max_);
                        if(max_<=0){
                            max_= 0;
                        }
                    }
                }
            }
        }
        return max_;
    }
};