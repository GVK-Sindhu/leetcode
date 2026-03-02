class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                string res;
                while(!st.empty() && isalpha(st.top())){
                    res+=st.top();
                    st.pop();
                }
                reverse(res.begin(),res.end());
                st.pop();
                string val;
                while(!st.empty() && isdigit(st.top())){
                    val+=st.top();
                    st.pop();
                }
                reverse(val.begin(),val.end());
                int ele=stoi(val);
                for(int i=0;i<ele;i++){
                    for(char c:res){
                        st.push(c);
                    }
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};