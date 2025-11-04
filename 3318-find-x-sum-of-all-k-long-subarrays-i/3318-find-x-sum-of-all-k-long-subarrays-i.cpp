class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int>res;
        for (int i = 0; i <= n - k; i++) {
            unordered_map<int, int> freq;
            for (int j = i; j < i + k; j++) {
                freq[nums[j]]++;
            }
            vector<pair<int,int>> freqarr;
            for (auto &it : freq) {
                freqarr.push_back({it.first, it.second});
            }
            sort(freqarr.begin(), freqarr.end(), [](auto &a, auto &b){
                if (a.second == b.second) return a.first > b.first;
                return a.second > b.second;
            });
            int sum = 0;
            int count = 0;
            for (auto &it : freqarr) {
                if (count == x) break;
                sum += it.first * it.second;
                count++;
            }
            res.push_back(sum);
        }
        return res;
    }
};