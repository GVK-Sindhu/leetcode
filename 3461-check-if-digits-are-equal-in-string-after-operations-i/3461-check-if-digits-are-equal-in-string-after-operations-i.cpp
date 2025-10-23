class Solution {
public:
    bool hasSameDigits(string s) {
    while (s.length()>2){
       vector<int> news;
       for(int i=0;i<s.length()-1;i++){
           news.push_back((s[i]-'0'+s[i+1]-'0')%10);
       }
        s.clear();
        for(int it:news){
            s+= to_string(it);
        }
    }
        return s.length()==2 && s[0]==s[1];
    }
};