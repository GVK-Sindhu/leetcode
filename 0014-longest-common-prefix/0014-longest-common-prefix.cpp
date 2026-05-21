class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string tmp1=strs[0];
        string tmp2=strs[strs.size()-1];
        int i=0;
        while(i<tmp1.size() && i<tmp2.size() && tmp1[i]==tmp2[i]){
            i++;
        }
        string res=tmp1.substr(0,i);
        return res;
    }
};