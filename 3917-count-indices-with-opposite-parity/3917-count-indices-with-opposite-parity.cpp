class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int oddc=0,evenc=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]%2==0){
                res[i]=oddc;
                evenc++;
            }
            else{
                res[i]=evenc;
                oddc++;
            }
        }
        return res;
    }
};