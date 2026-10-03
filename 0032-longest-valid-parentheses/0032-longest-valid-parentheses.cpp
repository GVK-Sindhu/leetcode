class Solution {
public:
    int longestValidParentheses(string s) {
        int oc=0,cc=0,maxlen=0;
        // (()) )( extra closec
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                oc++;
            }
            else{
                cc++;
            }
            if(cc>oc){
                cc=0;
                oc=0;
            }
            if(oc==cc){
                maxlen=max(maxlen,(oc+cc));
            }
        }
        oc=0,cc=0;
        // (() extra openc      ()))       )))(
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='('){
                oc++;
            }
            else{
                cc++;
            }
            if(oc>cc){
                oc=0;
                cc=0;
            }
            if(oc==cc){
                maxlen=max(maxlen,(oc+cc));
            }
        }
        return maxlen;
    }
};