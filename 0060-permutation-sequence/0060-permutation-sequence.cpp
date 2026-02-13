class Solution {
public:
    void solve(int idx,int n,int &c,string &res,vector<char>&tmp,vector<int>&used,int k){
        if(idx==n){
            c++;
            if(c==k){
                for(auto it:tmp){
                    res+=it;
                }
            }
            return;
        }
        for(int i=0;i<n;i++){
            if(!used[i]){
                used[i]=1;
                tmp.push_back('0'+i+1);
                solve(idx+1,n,c,res,tmp,used,k);
                tmp.pop_back();
                used[i]=0;
                if(!res.empty()) return;
            }
        }
    }
    string getPermutation(int n, int k) {
        string res="";
        vector<char>tmp;
        vector<int>used(n,0);
        int c=0;
        solve(0,n,c,res,tmp,used,k);
        return res;
    }
};