class Solution {
public:
    string largestOddNumber(string num) {
        int end=-1;
        string res="";
        for(int i=num.size()-1;i>=0;i--){
            int tmp=num[i]-'0';
            if(tmp%2==1){
                end=i;
                break;
            }
        }
        if(end==-1){
            return res;
        }
        res=num.substr(0,end+1);
        return res;
    }
};