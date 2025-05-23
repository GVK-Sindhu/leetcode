class Solution {
public:
    int minSteps(string s, string t) {
        int map1[26]={0},map2[26]={0};
        for(int i=0;i<s.size();i++){
            map1[s[i]-'a']++;
            map2[t[i]-'a']++;
        }
        int res=0;
        for(int i=0;i<26;i++){
            if(map1[i]>map2[i]){
                res+=map1[i]-map2[i];
            }
        }
        return res;
   }
};