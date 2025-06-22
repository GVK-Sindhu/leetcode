class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
       vector<string>res;
       for(int i=0;i<s.length();i+=k){
        res.push_back(s.substr(i,k));
       }
       if(!res.empty() && res.back().length()<k){
        res.back().append(k-res.back().length(),'x');
       }
       return res;
    }
};