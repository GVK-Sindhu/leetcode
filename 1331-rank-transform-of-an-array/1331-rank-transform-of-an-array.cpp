class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>tmp=arr;
        sort(tmp.begin(),tmp.end());
        unordered_map<int,int>mp;
        int c=1;
        for(int it:tmp){
            if(!mp.count(it)){
            mp[it]=c;
            c++;
            }
        }
        vector<int>res;
        for(int it:arr){
            res.push_back(mp[it]);
        }
        return res;
    }
};