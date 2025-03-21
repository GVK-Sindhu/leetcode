class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char>charset(s.begin(),s.end());
        for(char ch='Z';ch>='A';ch--){
            if(charset.count(ch) && charset.count(ch+32)){
                return string(1,ch);
            }
        }
        return "";
    }
};