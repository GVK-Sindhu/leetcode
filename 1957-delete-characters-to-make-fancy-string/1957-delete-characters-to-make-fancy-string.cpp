class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        char f=s[0];
        int c=0;
        for(int i=1;i<s.size();i++){
            if(f!=s[i]){
                res+=f;
                f=s[i];
                c=0;
            }
            else{
                c+=2;
                if(c>=3){
                    continue;
                }
                res+=s[i];
                f=s[i];
            }
        }
        res+=s[s.size()-1];
        return res;
    }
};