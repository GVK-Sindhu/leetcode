class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();
        int onec=0;
        for(char c:s){
            onec+=c-'0';
        }
        string res="";
        for(int i=0;i<onec-1;i++){
            res+="1";
        }
        for(int i=0;i<n-onec;i++){
            res+="0";
        }
        res+="1";
        return res;
    }
};