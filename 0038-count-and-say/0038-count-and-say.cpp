class Solution {
public:
    string countAndSay(int n) {
       if(n==1) return "1";
       string s="1";
       for(int i=2;i<=n;i++){
        string cur="";
        int c=1;
        for(int j=1;j<s.size();j++){
            if(s[j]==s[j-1]){
                c++;
            }
            else{
                cur+=to_string(c);
                cur+=s[j-1];
                c=1;
            }
        }
        cur+=to_string(c);
        cur+=s.back();
        s=cur;
       }
       return s;
    }
};