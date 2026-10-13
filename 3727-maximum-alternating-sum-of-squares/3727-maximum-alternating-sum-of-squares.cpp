class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),[](int a,int b){
            return abs(a)<abs(b);
        });
        long long ns=0,ps=0;
        for(int i=0;i<n/2;i++){
            ns+=(nums[i]*nums[i]);
        }
        for(int i=n/2;i<n;i++){
            ps+=(nums[i]*nums[i]);
        }
        return ps-ns;
    }
};