class Solution {
public:
    string removeOuterParentheses(string s) {
       string res="";
       int level=0;
       for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            level++;
            if(level>1){
                res+=s[i];
            }
        }
        else{
            level--;
            if(level>0){
                res+=s[i];
            }
        }
        
       }
       return res;
    }
};