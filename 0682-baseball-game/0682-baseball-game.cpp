class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string it:operations){
             if(it=="+"){
                int p1=st.top();
                st.pop();
                int p2=st.top();
                st.push(p1);
                st.push(p1+p2);
            }
            else if(it=="C"){
                st.pop();
            }
            else if(it=="D"){
                st.push(2*st.top());
            }
            else{
                st.push(stoi(it));
            }
        }
        int s=0;
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        return s;
    }
};