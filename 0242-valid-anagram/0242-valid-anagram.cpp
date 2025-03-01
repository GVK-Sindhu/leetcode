class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int>res(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            res[s[i]-'a']++;
            res[t[i]-'a']--;
        }
        for(int i:res){
            if(i!=0) return false;
        }
        return true;
    }
};