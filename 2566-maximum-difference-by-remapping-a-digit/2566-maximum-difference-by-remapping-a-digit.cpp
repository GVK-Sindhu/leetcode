class Solution {
public:
    int minMaxDifference(int num) {
        string nums=to_string(num);
        char replacemax=' ';
        string maxstr=nums;
        for(char c:nums){
            if(c!='9'){
                replacemax=c;
                break;
            }
        }
        replace(maxstr.begin(),maxstr.end(),replacemax,'9');
        char replacemin=' ';
        string minstr=nums;
        for(char c:nums){
            if(c!='0'){
                replacemin=c;
                break;
            }
        }
        replace(minstr.begin(),minstr.end(),replacemin,'0');
        int num1=stoi(maxstr);
        int num2=stoi(minstr);
        return num1-num2;
    }
};