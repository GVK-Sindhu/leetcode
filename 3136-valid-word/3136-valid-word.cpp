class Solution {
public:
    bool isValid(string word) {
        bool vow=false,con=false;
        if(word.length()>=3){
        for(char c:word){
            if(!isalnum(c)){
                return false;
            }
            if(isalnum(c)){
                if(isalpha(c)){
                char ch=tolower(c);
                if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                    vow=true;
                }
                else{
                    con=true;
                }
                }
            }
        }
        }
        return vow&&con;
    }
};