class Solution {
public:
    int maxDistance(string s, int k) {
        int maxmd=0;
        int n=0,w=0,so=0,e=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='N') n++;
            else if(s[i]=='E') e++;
            else if(s[i]=='W') w++;
            else so++;
            int curmd=abs(n-so)+abs(e-w);
            int steps=i+1;
            int wasted=steps-curmd;
            int extra=0;
            if(wasted!=0){
                extra=min(2*k,wasted);
            }
            int fmd=curmd+extra;
            maxmd=max(maxmd,fmd);
        }
        return maxmd;
    }
};