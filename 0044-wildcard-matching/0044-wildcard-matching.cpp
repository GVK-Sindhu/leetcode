class Solution {
public:
    bool isMatch(string inp, string tar) {
        int startidx=-1,match=0;
        int i=0,j=0;
        while(i<inp.size()){
            if(j<tar.size() && (inp[i]==tar[j] || tar[j]=='?')){
                i++;
                j++;
            }
            else if(j<tar.size() && tar[j]=='*'){
                startidx=j;
                match=i;
                j++;
            }
            else if(startidx!=-1){
                j=startidx+1;
                match++;
                i=match;
            }
            else{
                return false;
            }
        }
        while(j<tar.size() && tar[j]=='*'){
            j++;
        }
        return j==tar.size();
    }
};