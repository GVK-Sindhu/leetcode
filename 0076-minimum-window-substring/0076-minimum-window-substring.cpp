class Solution {
public:
    bool isgood(vector<int>&f1,vector<int>&f2){
        for(int i=0;i<128;i++){
            if(f2[i]<f1[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int>f1(128);
        vector<int>f2(128);
        int minlen=INT_MAX;
        for(int i=0;i<m;i++){
            f1[t[i]]++;
        }
        int st=-1,ed=-1;
        int i=0;
        for(int j=0;j<n;j++){
            f2[s[j]]++;
            while(isgood(f1,f2)){
                if((j-i+1)<minlen){
                    st=i;
                    ed=j;
                    minlen=(j-i+1);
                }
                f2[s[i]]--;
                i++;
            }
        }
        string res;
        if(st==-1 || ed==-1){
            return res;
        }
        else{
            for(int i=st;i<=ed;i++){
                res+=s[i];
            }
        }
        return res;
    }
};