class Solution {
public:
    
    char kthCharacter(int k) {
        string word="a";
        while(word.length()<k){
            string nextpart="";
            for(char c:word){
                char nextchar=(c=='z')?'a':(c+1);
                nextpart+=nextchar;
            }
            word+=nextpart;
        }
        return word[k-1];
    }
};