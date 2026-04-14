class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i=0;
        string res="";
        while( i<strs[0].size() && i<strs[strs.size()-1].size() && strs[0][i]==strs[strs.size()-1][i]){
            res+=strs[0][i];
            i++;
        }
        return res;
    }
};