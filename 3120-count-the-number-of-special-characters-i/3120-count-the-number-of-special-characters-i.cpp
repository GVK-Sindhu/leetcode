class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>freq;
        set<char>st;
        for(auto it:word){
            freq[it]++;
            char tmp=tolower(it);
            st.insert(tmp);
        }
        int c=0;
        for(auto it:st){
            char tmp=toupper(it);
            if(freq[tmp]>0 && freq[it]>0){
                c++;
            }
        }
        return c;
    }
};