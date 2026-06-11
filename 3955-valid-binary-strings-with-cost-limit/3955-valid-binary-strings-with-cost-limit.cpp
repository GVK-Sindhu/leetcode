class Solution {
public:
    vector<string>res;
    void solve(int i,bool prvone,int cost,int n,int k,string cur){
        if(i==n){
            res.push_back(cur);
            return;
        }
        cur+='0';
        solve(i+1,false,cost,n,k,cur);
        cur.pop_back();
        if(!prvone && (cost+i)<=k){
            cur+='1';
            solve(i+1,true,cost+i,n,k,cur);
        }
        cur.pop_back();
    }
    vector<string> generateValidStrings(int n, int k) {
       string cur="";
       solve(0,false,0,n,k,cur);
       return res;
    }
};