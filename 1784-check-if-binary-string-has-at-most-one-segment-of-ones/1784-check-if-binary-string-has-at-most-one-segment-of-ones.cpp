class Solution {
public:
    bool checkOnesSegment(string s) {
        int oc=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                oc++;
            }
            else{
                if(oc) res+=1;
                oc=0;
            }
        }
        if(oc){
            res+=1;
        }
        
        if(res>1) return false;
        return true;
    }
};