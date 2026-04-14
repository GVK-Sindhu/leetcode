class Solution {
public:
    int myAtoi(string s) {
        int i=0,l=s.size();
        while(i<l && isspace(s[i])){
                i++;
        }
        if(i==l) return 0;
        int sign=1;
        if(i<l && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        long long res=0;
        while(i<l && isdigit(s[i])){
            int digit=s[i]-'0';
            if(res>(INT_MAX-digit)/10){
                return sign==-1?INT_MIN:INT_MAX;
            }
            res=res*10+digit;
            i++;
        }
        return sign*res;
    }
};