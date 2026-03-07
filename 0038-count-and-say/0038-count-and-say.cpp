class Solution {
public:
    // string solve(int n,string st){
    //     if(n==1){
    //         string st="1";

    //     }
    //     res+=
    // }
    string countAndSay(int n) {
        string st="1";
       for(int i=1;i<n;i++){
         string tmp="";
         int c=1;
         for(int j=1;j<=st.size();j++){
            if(j<st.size() && st[j]==st[j-1]){
                c++;
            }
            else{
                tmp+=to_string(c);
                tmp+=st[j-1];
                c=1;
            }
         }
         st=tmp;
       }
    //    solve(n,st);
    //    return res;
        return st;
    }
};