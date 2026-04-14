class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>freq;
        for(string it:strs){
            string key=it;
            sort(key.begin(),key.end());
            freq[key].push_back(it);
        }
        vector<vector<string>>res;
        for(auto it:freq){
            res.push_back(it.second);
        }
        return res;
    }
};