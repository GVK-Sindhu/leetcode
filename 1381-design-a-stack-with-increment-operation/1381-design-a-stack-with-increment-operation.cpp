class CustomStack {
public:
    stack<int>st;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(st.size()<size){
            st.push(x);
        }
    }
    
    int pop() {
        int res=-1;
        if(!st.empty()) res=st.top();
        st.pop();
        return res;
    }
    
    void increment(int k, int val) {
        int c=st.size()-k;
        vector<int>tmp;
        if(st.size()<k){
            while(!st.empty()){
                tmp.push_back(st.top()+val);
                st.pop();
            }
            reverse(tmp.begin(),tmp.end());
            for(int it:tmp){
                st.push(it);
            }
        }
        else{
            while(!st.empty()){
                 if(c>0){
                    tmp.push_back(st.top());
                }
                else{
                    tmp.push_back(st.top()+val);
                }
                st.pop();
                c--;
            }
            reverse(tmp.begin(),tmp.end());
            for(int it:tmp){
                st.push(it);
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */