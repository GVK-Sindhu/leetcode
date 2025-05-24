class Solution {
public:
    bool checkIfPangram(string sentence) {
        int freq[26]={0};
        for(char ch:sentence){
            freq[ch-'a']++;
        }
        for(int it:freq){
            if(it==0){
                return false;
                break;
            }
        }
        return true;
    }
};      
