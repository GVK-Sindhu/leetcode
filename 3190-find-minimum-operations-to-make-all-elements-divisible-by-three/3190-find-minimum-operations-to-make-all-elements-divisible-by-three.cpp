class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int res=0;
        for(auto it:nums){
                res+=min(it%3,3-(it%3));
            
        }
        return res;
    }
};