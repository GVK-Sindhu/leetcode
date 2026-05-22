class Solution {
public:
    string frequencySort(string s) {
        map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        vector<pair<char,int>>arr(freq.begin(),freq.end());
        sort(arr.begin(),arr.end(),[](pair<char,int>a,pair<char,int>b){
            return a.second>b.second;
        });
        string res="";
        for(auto it:arr){
            res+=string(it.second,it.first);
        }
        return res;
    }
};