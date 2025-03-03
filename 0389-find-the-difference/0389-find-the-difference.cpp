class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>res;
        for(int i=0;i<t.length();i++){
            res[t[i]]++;
        }
        for(int j=0;j<s.length();j++){
            res[s[j]]--;
        }
        for(auto it:res){
            if(it.second>0) return it.first;
        }
            return '0';
    }
};