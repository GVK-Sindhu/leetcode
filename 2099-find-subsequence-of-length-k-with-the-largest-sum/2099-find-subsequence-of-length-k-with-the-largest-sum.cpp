class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back({nums[i],i});
        }
     sort(temp.begin(),temp.end(),greater<>());
     vector<pair<int,int>>topk(temp.begin(),temp.begin()+k);
     sort(topk.begin(),topk.end(),[](auto &a,auto &b){
        return a.second<b.second;
     });
     vector<int>res;
     for(auto it:topk){
        res.push_back(it.first);
     }
     return res;
    }

};