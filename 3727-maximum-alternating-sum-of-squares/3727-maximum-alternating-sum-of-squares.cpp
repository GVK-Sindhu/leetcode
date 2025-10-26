class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        int n=nums.size();
        int i=0,j=n-1;
        long long res=0;
        while(i<j){
            res+=1LL*(nums[j]*nums[j])-(nums[i]*nums[i]);
            i++;
            j--;
        }
        if(n%2!=0){
            res+=1LL*(nums[i]*nums[i]);
        }
        return res;
    }
};