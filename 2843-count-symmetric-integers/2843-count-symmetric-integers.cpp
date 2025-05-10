class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++){
            string s=to_string(i);
            int len=s.length();
            if(len%2!=0){
                continue;
            }
            int half=len/2;
            int s1=0,s2=0;
            for(int j=0;j<half;j++){
                s1+=s[j]-'0';
            }
            for(int j=half;j<len;j++){
                s2+=s[j]-'0';
            }
            if(s1==s2){
                c++;
            }
        }
        return c;
    }
};