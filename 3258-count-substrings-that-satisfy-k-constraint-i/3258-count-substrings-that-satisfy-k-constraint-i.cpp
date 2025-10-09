class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int c=0;
        for(int i=0;i<s.size();i++){
           int co=0,cz=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='1'){
                    co++;
                }
                else{
                    cz++;
                }
                if(co<=k || cz<=k){
                    c++;
                }
                else{
                    break;
                }
            }
        }
        return c;
    }
};