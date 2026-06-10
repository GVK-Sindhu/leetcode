class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    bool doesAliceWin(string s) {
        int vc=0;
        for(int i=0;i<s.size();i++){
            if(isvowel(s[i])){
                vc++;
            }
        }
        // if(vc%2==1 && vc==1){
        //     return true;
        // }
        if(vc==0){
            return false;
        }
        return true;
    }
};