class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>freq1;
        unordered_map<char,char>freq2;
        for(int i=0;i<s.size();i++){
            if(freq1[s[i]] && freq1[s[i]]!=t[i]){
                return false;
            }
            if(freq2[t[i]] && freq2[t[i]]!=s[i]){
                return false;
            }
            freq1[s[i]]=t[i];
            freq2[t[i]]=s[i];
        }
        return true;
    }
};