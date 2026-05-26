class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool>lower(26,false);
        vector<bool>upper(26,false);
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z'){
                lower[word[i]-'a']=true;
            }
            if(word[i]>='A' && word[i]<='Z'){
                upper[word[i]-'A']=true;
            }
        }
        int c=0;
        for(int i=0;i<26;i++){
            if(lower[i] && upper[i]){
                c++;
            }
        }
        return c;
    }
};