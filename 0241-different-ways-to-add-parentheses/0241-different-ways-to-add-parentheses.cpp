class Solution {
public:
    vector<int>solve(string exp){
        vector<int>res;
        if(exp.length()==0) return res;
        if(exp.length()==1) {
            res.push_back(stoi(exp));
            return res;
        }
        if(exp.length()==2 && isdigit(exp[0])){
            res.push_back(stoi(exp));
            return res;
        }
        for(int i=0;i<exp.length();i++){
            char curchar=exp[i];
            if(isdigit(exp[i])){
                continue;
            }
            vector<int>left=solve(exp.substr(0,i));
            vector<int>right=solve(exp.substr(i+1));
            int ans=0;
            for(int lit:left){
                for(int rit:right){
                    if(curchar=='+'){
                        ans=lit+rit;
                    }
                    else if(curchar=='-'){
                        ans=lit-rit;
                    }
                    else if(curchar=='*'){
                        ans=lit*rit;
                    }
                    res.push_back(ans);
                }
            }
        }
        return res;
    }
    vector<int> diffWaysToCompute(string exp) {
        vector<int> res=solve(exp);
        return res;
    }
};