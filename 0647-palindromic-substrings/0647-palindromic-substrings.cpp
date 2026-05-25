class Solution {
public:
    bool ispal(string tmp){
        if(tmp.size()==1) return 1;
        int i=0,j=tmp.size()-1;
        while(i<=j){
            if(tmp[i]!=tmp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int c=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                string tmp=s.substr(i,(j-i+1));
                if(ispal(tmp)){
                    c++;
                }
            }
        }
        return c;
    }
};