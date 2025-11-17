class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                res.push_back(i+1);
            }
        }
        for(int i=0;i<res.size()-1;i++){
            int tmp=res[i+1]-res[i];
            if(tmp<=k){
                return false;
            }
        }
        return true;
    }
};