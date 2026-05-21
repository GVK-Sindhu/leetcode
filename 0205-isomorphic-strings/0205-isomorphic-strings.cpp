class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // unordered_map<char,char>freq1;
        // unordered_map<char,char>freq2;
        // for(int i=0;i<s.size();i++){
        //     if(freq1[s[i]] && freq1[s[i]]!=t[i]){
        //         return false;
        //     }
        //     if(freq2[t[i]] && freq2[t[i]]!=s[i]){
        //         return false;
        //     }
        //     freq1[s[i]]=t[i];
        //     freq2[t[i]]=s[i];
        // }
        // return true;
        int m1[256]={0},m2[256]={0};
        int n=s.size();
        for(int i=0;i<n;i++){
            if(m1[s[i]]!=m2[t[i]]) return false;
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};