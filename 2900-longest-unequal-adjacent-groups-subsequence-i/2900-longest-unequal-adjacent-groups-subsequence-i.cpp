class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>res;
        int n=words.size();
        if(n==0) return res;
        res.push_back(words[0]);
        int prevgrp=groups[0];
        for(int i=1;i<n;i++){
            if(prevgrp!=groups[i]){
                res.push_back(words[i]);
            }
            prevgrp=groups[i];
        }
        return res;
    }
};