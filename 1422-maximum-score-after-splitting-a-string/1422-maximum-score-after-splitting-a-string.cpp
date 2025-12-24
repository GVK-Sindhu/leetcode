class Solution {
public:
    int maxScore(string s) {
        int zc=0,oc=0,maxres=0;
        for(auto it:s){
            if(it=='1'){
                oc++;
            }
        }
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                zc++;
            }
            else{
                oc--;
            }
            maxres=max(maxres,(zc+oc));
        }
        return maxres;
    }
};