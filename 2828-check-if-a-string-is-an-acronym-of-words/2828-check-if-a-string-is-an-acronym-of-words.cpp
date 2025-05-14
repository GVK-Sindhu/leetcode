class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string res;
        if(words.size()!=s.size()) return false;
       for(int i=0;i<words.size();i++){
                res+=words[i][0];
         }
        
       return res==s;
    }
};