class Solution {
public:
    string sortVowels(string s) {
        string vowel="aeiouAEIOU";
        vector<char>temp;
        for(int i=0;i<s.size();i++){
            if(vowel.find(s[i])!=string::npos){
                temp.push_back(s[i]);
            }
        }
        sort(temp.begin(),temp.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(vowel.find(s[i])!=string::npos){
                s[i]=temp[j++];
            }
        }
        return s;
    }
};