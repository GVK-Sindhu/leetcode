class Solution {
public:
    void solve(int idx,string &s,set<string>&st,string &cur,int balance){
        if(idx==s.size()){
            if(balance==0) st.insert(cur); //at end put only valid string like when oc==cc i.e balance=0
            return;
        }
        if(isalpha(s[idx])){ //if letter always take
            cur.push_back(s[idx]);
            solve(idx+1,s,st,cur,balance);
            cur.pop_back();
        }
        else{
            if(s[idx]=='(') {  // if open do take nottake
                cur.push_back(s[idx]); 
                solve(idx+1,s,st,cur,balance+1);
                cur.pop_back();
             }
            if(s[idx]==')' && balance>0 ) { //if close take only when balance>0 i.e oc>cc
                cur.push_back(s[idx]); 
                solve(idx+1,s,st,cur,balance-1);
                cur.pop_back();
            }
            solve(idx+1,s,st,cur,balance); //notake
        }
   }
    vector<string> removeInvalidParentheses(string s) {
        vector<string>res;
        set<string>st;
        string tmp="";
        int balance=0;
        solve(0,s,st,tmp,balance);
        int maxlen=0;
        for(auto it:st){
           maxlen=max(maxlen,(int)it.size());
        }
        for(auto it:st){
            if((int)it.size()==maxlen){
                res.push_back(it);
            }
        }
        return res;
    }
};