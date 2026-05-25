class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& grp) {
        vector<string>res;
        int prev=grp[0];
        res.push_back(words[0]);
        for(int i=1;i<grp.size();i++){
            if(grp[i]!=prev){
                prev=grp[i];
                res.push_back(words[i]);
            }
        }
        return res;
    }
};