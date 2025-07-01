class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<int,int>freq;
        int c=0;
        for(auto it:word){
            freq[it]++;
        }
        if(freq.size()==word.length()){
            return 1;
        }
        if(freq.size()==1){
            return word.length();
        }
        else{
            for(auto it:freq){
                if(it.second>1 && freq.size()==2){
                    c+=it.second;
                    c++;
                }
                else if(it.second>1 && freq.size()>2){
                    c+=it.second;
                }
            }
        }
        return c-1;
    }
};