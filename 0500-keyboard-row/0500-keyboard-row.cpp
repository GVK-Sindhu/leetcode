class Solution {
public:
    bool find(string word,string row){
        for(char c:word){
            if(row.find(tolower(c))==string::npos){
                return false;
            }
           
        }
         return true;
    }
    vector<string> findWords(vector<string>& words) {
       string r1="qwertyuiop",r2="asdfghjkl",r3="zxcvbnm";
       vector<string>res;
       for(auto word:words){
            if(find(word,r1) || find(word,r2) || find(word,r3)){
              res.push_back(word);
            }
        
       }
       return res;
    }
};