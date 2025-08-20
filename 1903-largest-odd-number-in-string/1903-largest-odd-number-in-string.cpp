class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int tmp=0;
        string res="";
        for(int i=0;i<n;i++){
            if(num[i]%2==1){
                tmp=i+1;
            }
        }
        res+=num.substr(0,tmp);
        return res;
    }
};