class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<string>st;
        for(char c:s){
            if(c=='('){
                st.push("(");
            }
            else{
                if(!st.empty() && st.top()=="("){
                    st.pop();
                    st.push(to_string(1));
                }
                else{
                    int s=0;
                    while(!st.empty() && st.top()!="("){
                        s+=stoi(st.top());
                        st.pop();
                    }
                    st.pop();
                    st.push(to_string(2*s));
                }
            }
        }
        int res=0;
        while(!st.empty()){
            res+=stoi(st.top());
            st.pop();
        }
        return res;
    }
};

// ( ( ) ) ( )

//  (()) ->(1) ->2

// ( () () ) -> ( 1 + 1 ) =( 2 ) = 4

// ((( ))) ()
// 124    + 1= 5

