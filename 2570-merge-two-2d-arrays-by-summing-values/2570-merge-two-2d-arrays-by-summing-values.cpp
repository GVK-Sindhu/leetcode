class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>res;
        map<int,int>mergedmap;
        for(auto& pair:nums1){
            mergedmap[pair[0]]+=pair[1];
        }
        for(auto & pair:nums2){
            mergedmap[pair[0]]+=pair[1];
        }
        for(auto& pair:mergedmap){
            res.push_back({pair.first,pair.second});
        }
        return res;
    }
};