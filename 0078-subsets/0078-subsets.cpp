class Solution {
public:
    void solve(int i,vector<int>& nums,vector<int>&ds,vector<vector<int>>&res){
        if(i==nums.size()){
            res.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        solve(i+1,nums,ds,res);
        ds.pop_back();
        solve(i+1,nums,ds,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>ds;
        solve(0,nums,ds,res);
        return res;
    }
};