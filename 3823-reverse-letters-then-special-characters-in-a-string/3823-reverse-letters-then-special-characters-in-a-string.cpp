class Solution {
public:
    string reverseByType(string s) {
       vector<char>alpha;
       vector<char>special;
       for(auto it:s){
            if(isalpha(it)){
                alpha.push_back(it);
            }
            else{
                special.push_back(it);
            }
       }
       reverse(alpha.begin(),alpha.end());
       reverse(special.begin(),special.end());
       int idx1=0,idx2=0;
       string res=s;
       for(int i=0;i<res.size();i++){
            if(isalpha(res[i])){
                res[i]=alpha[idx1];
                idx1++;
            }
            else{
                res[i]=special[idx2];
                idx2++;
            }
       }
       return res;
    }
};