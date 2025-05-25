class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int res=0;
        unordered_map<string,int>freq;
        for(string word:words){
            string rev_word=word;
            reverse(rev_word.begin(),rev_word.end());
            if(freq[rev_word]>0){
                res+=4;
                freq[rev_word]--;
            }
            else{
                freq[word]++;
            }
        }
        for(auto it:freq){
            if(it.second==1){
                string s=it.first;
                if(s[0]==s[1]){
                res+=2;
                break;
                }
            }
        }
        return res;
    }
};