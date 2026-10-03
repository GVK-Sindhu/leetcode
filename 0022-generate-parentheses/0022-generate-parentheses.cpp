class Solution {
public:
    void solve(int n,vector<string>&res,string &cur,int oc,int cc){
        if(oc==n && cc==n){
            res.push_back(cur);
            return ;
        }
        if(oc<n){
            cur+='(';
            solve(n,res,cur,oc+1,cc);
            cur.pop_back();
        }
        if(cc<n && cc<oc){
            cur+=')';
            solve(n,res,cur,oc,cc+1);
            cur.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        string cur="";
        solve(n,res,cur,0,0);
        return res;
    }
};