class Solution {
public:
    bool ispal(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string tmp;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                tmp+=tolower(s[i]);
            }
        }
        if(ispal(tmp)){
            return true;
        }
        return false;
    }
};