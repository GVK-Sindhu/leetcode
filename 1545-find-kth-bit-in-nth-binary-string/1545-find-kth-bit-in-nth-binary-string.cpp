class Solution {
public:
    string invert(string tmp){
        for(int i=0;i<tmp.size();i++){
            if(tmp[i]=='0'){
                tmp[i]='1';
            }
            else{
                tmp[i]='0';
            }
        }
        return tmp;
    }
    char findKthBit(int n, int k) {
        string s1="0";
        for(int i=2;i<=n;i++){
            string tmp=invert(s1);
            reverse(tmp.begin(),tmp.end());
            s1=s1+"1"+tmp;
        }
        return s1[k-1];
    }
};