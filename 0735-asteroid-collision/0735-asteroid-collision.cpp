class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        for(int i=0;i<a.size();i++){
            bool alive = true;
            while(!st.empty() && st.top() > 0 && a[i] < 0){
                int a1 = abs(st.top());
                int b  = abs(a[i]);
                if(a1 < b){
                    st.pop();
                }
                else if(a1 == b){
                    st.pop();
                    alive = false;
                    break;
                }
                else{
                    alive = false;
                    break;
                }
            }

            if(alive)
                st.push(a[i]);
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
