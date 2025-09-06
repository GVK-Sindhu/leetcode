class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        int n=a.size();
        vector<int>res;
        sort(a.begin(),a.end());
        unordered_map<int,int>freq;
        if(n%2!=0){
            return {};
        }
        for(int it:a){
            freq[it]++;
        }
        for(int it:a){
            if(freq[it]==0){
                continue;
            }
            else if(freq[2*it]==0){
                return {};
            }
            res.push_back(it);
            freq[it]--;
            freq[2*it]--;
        }
        return res;
    }
};