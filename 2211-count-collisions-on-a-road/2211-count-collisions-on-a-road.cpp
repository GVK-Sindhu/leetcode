class Solution {
public:
    int countCollisions(string directions) {
        int l=0,r=directions.size()-1;
        int lc=0,rc=0;
        while(l<directions.size() && directions[l]=='L'){
            lc++;
            l++;
        }
        while(r>=0 && directions[r]=='R'){
            rc++;
            r--;
        }
        int c=0;
        for(int i=l;i<=r;i++){
            if(directions[i]=='S'){
                continue;
            }
            else{
                c++;
            }
        }
        return c;
    }
};