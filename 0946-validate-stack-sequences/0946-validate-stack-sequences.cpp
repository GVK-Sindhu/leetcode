class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int l=0;
        int n=pushed.size();
        for(int i=0;i<n;i++){
            st.push(pushed[i]);
            while(!st.empty() && st.top()==popped[l]){
                    st.pop();
                    l++;
            }
        }
        cout<<l<<" ";
        if(l<n){
            for(int i=l;i<popped.size();i++){
                if(!st.empty() && st.top()==popped[i]){
                    st.pop();
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};