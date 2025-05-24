class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>m;
        int res=0;
        for(int i=0;i<t.size();i++){
            m[t[i]]=i;
        }
        for(int i=0;i<s.size();i++){
             res+=abs(i-m[s[i]]);
            
        }
        return res;
    }
};