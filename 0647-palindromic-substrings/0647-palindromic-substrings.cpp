class Solution {
public:
    bool ispal(string s){
        string revs=s;
        reverse(s.begin(),s.end());
        if(s==revs){
            return true;
        }
        else{
            return false;
        }
    }
    int countSubstrings(string s) {
        int n=s.size(),c=0;
        for(int i=0;i<n;i++){
            string tmp="";
            for(int j=i;j<n;j++){
                tmp+=s[j];
                if(ispal(tmp)){
                    c++;
                }
            }
        }
        return c;
    }
};