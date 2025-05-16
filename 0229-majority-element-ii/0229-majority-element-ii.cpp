class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>res;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>n/3){
                res.push_back(it.first);
            }
        }
        return res;
    }
};