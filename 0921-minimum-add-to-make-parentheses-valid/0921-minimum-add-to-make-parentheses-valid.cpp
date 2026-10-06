class Solution {
public:
    int minAddToMakeValid(string s) {
        int oc=0,cc=0,res=0;
        stack<char>st;
        for(char c:s){
            // if(c=='('){
            //     oc++;
            // }
            // else{
            //     cc++;
            // }
            // if(oc==cc){
            //     oc=0;
            //     cc=0;
            // }
            // if(cc>oc){
            //     res++;
            // }
            if(c=='('){
                st.push('(');
            }
            else{
                if(!st.empty() && st.top()!='('){
                    res++;
                }
                else if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    res++;
                }
            }
        }
        return (int)st.size()+res;
        // int diff=abs(oc-cc);
        // return diff;
        // return res+=l
    }
};