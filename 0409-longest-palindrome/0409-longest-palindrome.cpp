class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>freq;
        int res=0;
        for(char ch:s){
            freq[ch]++;
        }
        bool odd=false;
        for(auto it:freq){
            if(it.second%2==0){
                res+=it.second;
            }
            if(it.second%2!=0){
                res+=it.second-1;
                odd=true;
            }
        }
        if(odd){
            res+=1;
        }
        return res;
    }
};