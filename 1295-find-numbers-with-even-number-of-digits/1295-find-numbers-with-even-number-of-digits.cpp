class Solution {
public:
    int solve(int n){
        int tmp=n;
        int c=0;
        while(tmp>0){
            c++;
            tmp/=10;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(solve(nums[i])%2==0){
                c++;
            }
        }
        return c;
    }
};