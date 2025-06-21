class Solution {
public:
    int minDeletions(string s) {
        // unordered_map<int,int>freq;
        // for(int i=0;i<s.length();i++){
        //     freq[s[i]]++;
        // }
        // vector<int>res;
        // set<int>se;
        // for(auto it:freq){
        //     res.push_back(it.second);
        //     se.insert(it.second);
        // }
        // if(res.size()==se.size()){
        //     return 0;
        // }
        // int r=res.size()-se.size();
        // return r;
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    unordered_set<int> used;
    int deletions = 0;

    for (auto it : freq) {
        char c=it.first;
        int count=it.second;
        while (count > 0 && used.count(count)) {
            count--;
            deletions++;
        }
        if (count > 0) used.insert(count);
    }

    return deletions;

    }
};