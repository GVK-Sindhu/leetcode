class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        char res='$';
        unordered_map<char,int>freq2;
        for(char c:t){
            freq2[c]++;
        }
        for(int i=0;i<t.size();i++){
            char c=t[i];
            if(freq2[c]==freq[c] && freq[s[i]]>=1){
                continue;
            }
            else{
                return t[i];
            }
        }
        return res;
    }
};