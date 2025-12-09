class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
     stack<int>st;
     int n=a.size();
     for(int i=0;i<n;i++){
       bool alive=true;
       while(!st.empty() && st.top()>0 && a[i]<0 && alive){ //we check only for -ve ele and also where stack top has +ve ele
        if(st.top()<(-a[i])){ //if it is -10,5 the 5 will be destroyed later -10 can be pushed to stack
            st.pop();
        }
        else if(st.top()==(-a[i])){//if it is -10,10 both will destroy each other and there is no chance of adding -10 into stack so alive=false
            st.pop();
            alive=false;
        }
        else{ //if 10,-5 stack top is > -5 so -5 will not be included in stack so alive=false
           alive=false;
        }
       }
       if(alive){
        st.push(a[i]);
       }
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