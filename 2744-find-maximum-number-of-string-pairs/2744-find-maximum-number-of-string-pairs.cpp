class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int freq[26]={0};
        for(string word:words){
            for(char ch:word){
                freq[ch-'a']++;
            }
        }
        int c=0;
        for(int it:freq){
            if(it>1){
                c++;
            }
        }
        return c/2;
    }
};