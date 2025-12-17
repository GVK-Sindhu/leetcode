class Solution {
public:
    int calc(vector<int>& nums){
        int s=0;
        for(int it:nums){
            if(it%2==0){
                s+=it;
            }
        }
        return s;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>res;
        for(auto it:queries){
            int idx=it[1];
            int val=it[0];
            nums[idx]=nums[idx]+val;
            int sum=calc(nums);
            res.push_back(sum);
        }
        return res;
    }
};