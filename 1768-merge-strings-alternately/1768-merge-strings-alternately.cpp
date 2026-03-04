class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();
        string res="";
        for(int i=0;i<max(s1,s2);i++){
            if(i<s1){
                res.push_back(word1[i]);
            }
            if(i<s2){
                res.push_back(word2[i]);
            }
        }
        return res;
    }
};