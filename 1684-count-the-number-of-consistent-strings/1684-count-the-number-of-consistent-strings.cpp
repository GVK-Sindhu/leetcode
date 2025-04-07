class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>allowedset(allowed.begin(),allowed.end());
        int c=0;
        for(string i:words){
            bool flag=true;
            for(char ch:i){
                if (allowedset.find(ch)==allowedset.end()){
                    flag=false;
                    break;
                }
            }
            if(flag){
                c++;
            }
        }
        return c;
    }
};