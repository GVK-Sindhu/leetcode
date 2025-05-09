class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>res;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            string temp="";
            for(char ch:s){
                if(ch==separator && temp!=""){
                    res.push_back(temp);
                    temp="";
                }
                if(ch!=separator){
                    temp+=ch;
                }
            }
            if(temp!=""){
                res.push_back(temp);
            }
        }
        return res;
    }
};