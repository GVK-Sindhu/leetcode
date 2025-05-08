class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int balance=0;
        for(auto it:s){
            if(it=='('){
                if(balance>0){
                    res+=it;
                }
                balance++;
            }
            else{
                balance--;
                if(balance>0){
                    res+=it;
                }
            }
        }
        return res;
    }
};