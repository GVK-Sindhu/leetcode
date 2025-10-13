class Solution {
public:
    bool anagram(string s1,string s2){
        unordered_map<char,int>f1,f2;
        if(s1.size()!=s2.size()) return false;
        for(int i=0;i<s1.size();i++){
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
        }
        if(f1==f2){
            return true;
        }
        return false;
    }
    vector<string> removeAnagrams(vector<string>& words) {
            int i=1;
            while(i<words.size()){
                if(anagram(words[i-1],words[i])){
                 words.erase(words.begin()+i); 
                }
                else{
                    i++;
                }
            }
        return words;
    }
};