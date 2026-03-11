class Solution {
public:
    vector<vector<int>> res;
    void solve(int idx,vector<int>& nums,vector<int>& ans){
        if(idx==nums.size()){
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[idx]);
        solve(idx+1,nums,ans);
        ans.pop_back();
        solve(idx+1,nums,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        solve(0,nums,ans);
        return res;
    }
};