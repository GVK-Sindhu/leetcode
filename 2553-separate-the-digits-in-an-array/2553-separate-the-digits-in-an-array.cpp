class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>res;
        for(int it:nums){
            string tmp=to_string(it);
            for(auto i:tmp){
                res.push_back(i-'0');
            }
        }
        return res;
    }
};