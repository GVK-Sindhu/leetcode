class Solution {
public:
    int iswave(string tmp){
        int c=0;
        for(int i=1;i<tmp.size()-1;i++){
            if(tmp[i]>tmp[i-1] && tmp[i]>tmp[i+1]){
                c++;
            }
            if(tmp[i]<tmp[i-1] && tmp[i]<tmp[i+1]){
                c++;
            }
        }
        return c;
    }
    int totalWaviness(int num1, int num2) {
        string s1=to_string(num1);
        string s2=to_string(num2);
        int s=0;
        if(s1.length()<=2 && s2.length()<=2){
            return 0;
        }
        else{
            for(int i=num1;i<=num2;i++){
                string tmp=to_string(i);
                s+=iswave(tmp);
            }
        }
        return s;
    }
};