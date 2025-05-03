class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int c=0;
            int cur=nums[i];
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    c++;
                }
            }
            res.push_back(c);
        }
        return res;
    }
};