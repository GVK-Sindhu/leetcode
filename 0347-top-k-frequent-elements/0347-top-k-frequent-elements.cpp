class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int it:nums){
            freq[it]++;
        }
        vector<pair<int,int>>freqarr;
        for(auto it:freq){
            freqarr.push_back({it.second,it.first});
        }
        sort(freqarr.rbegin(),freqarr.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(freqarr[i].second);
        }
        return res;
    }
};