class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>f(26,0);
        if(s.size()<t.size()){
            swap(s,t);
        }
        for(int it:s){
            f[it-'a']++;
        }
        for(int it:t){
            f[it-'a']--;
        }
        for(int it:f){
            if(it>0){
                return false;
            }
        }
        return true;
    }
};