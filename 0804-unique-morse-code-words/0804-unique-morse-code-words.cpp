class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // vector<string>code={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        // unordered_set<string>transformations;
        // for(string it:words){
        //     string i="";
        //     for(char ch:it){
        //         i+=code[ch-'a'];//to iterate over all the letters of word and
        //         append them into i  i=".-"+code['c'-'a']
        //     }
        //     transformations.insert(i);
        // }
        // return transformations.size();
        unordered_map<char,string> code={
        {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."}, {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."}, {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."}, {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."}, {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"}, {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"}, {'y', "-.--"}, {'z', "--.."}, 
        };
        unordered_set<string> ans;
        for (string it : words) {
            string temp = "";
            for (char ch : it) {
                temp += code[ch];
            }
            ans.insert(temp);
        }
        return ans.size();
    }
};