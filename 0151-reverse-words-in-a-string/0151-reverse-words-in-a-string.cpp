class Solution {
public:
    string reverseWords(string s) {
        int n=s.length(),i=0;
        string res;
        while(i<n)
        {
            while(i<n && s[i]==' '){
                i++;
            }
            if(i>=n) break;
            int j=i+1;
            while(j<n && s[j]!=' '){
                j++;
            }
            if(res.length()==0)
                 res=s.substr(i,j-i);
            else{
                res=s.substr(i,j-i)+" "+res;
            }
            i=j+1;
        }
        return res;
    }
};