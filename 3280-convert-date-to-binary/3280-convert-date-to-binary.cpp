class Solution {
    string convert(int n){
        string ans="";
        while(n>0){
            if(n&1){
                ans="1"+ans;
            }
            else{
                ans="0"+ans;
            }
            n=n>>1;
        }
        return ans;
    }
public:
    string convertDateToBinary(string date) {
       int year=stoi(date.substr(0,4));
       string yyyy=convert(year);
       int month=stoi(date.substr(5,2));
       string mm=convert(month);
       int day=stoi(date.substr(8,2));
       string dd=convert(day);
       string res=yyyy+"-"+mm+"-"+dd;
       return res;
    }
};