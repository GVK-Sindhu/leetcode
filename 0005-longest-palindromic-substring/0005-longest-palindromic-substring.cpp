class Solution {
public:
    bool ispal(int i,int j,string &s){
        if(i>=j){
            return true;
        }
        if(s[i]!=s[j]){
            return false;
        }
        return ispal(i+1,j-1,s);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=1;
        int start=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispal(i,j,s)){
                    if(maxlen<(j-i+1)){
                        maxlen=(j-i+1);
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
    }
};