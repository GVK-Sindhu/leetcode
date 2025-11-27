class Solution {
public:
    int minimumFlips(int n){
        string s="",r="";
         while(n>0){
            s.push_back((n%2)+'0');
            n/=2;
        }
        r=s;
        reverse(s.begin(),s.end());
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=r[i])
            {
                c++;
            }
        }return c;
    }
};