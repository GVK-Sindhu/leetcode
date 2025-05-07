class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>transformations;
        for(string it:words){
            string i="";
            for(char ch:it){
                i+=code[ch-'a'];//to iterate over all the letters of word and append them into i  i=".-"+code['c'-'a']
            }
            transformations.insert(i);
        }
        return transformations.size();
    }
};