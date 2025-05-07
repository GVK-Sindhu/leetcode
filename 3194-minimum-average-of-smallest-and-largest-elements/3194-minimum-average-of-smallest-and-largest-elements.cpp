class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<double>avg(n/2);
        for(double i=0;i<n/2;i++){
            avg[i]=(nums[i]+nums[n-i-1])/2.0;
        }
        double min=10000;
        for(auto it:avg){
            if(it<min){
                min=it;
            }
        }
        return min;
    }
};