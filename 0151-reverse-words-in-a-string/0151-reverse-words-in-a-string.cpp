class Solution {
public:
    string reverseWords(string s) {
        vector<string>ans;
        string tmp="";
       for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            tmp+=s[i];
        }
        else{
            if(!tmp.empty()){
                ans.push_back(tmp);
                tmp="";
            }
        }
       }
       if(!tmp.empty()){
        ans.push_back(tmp);
       }
       string res="";
       for(int i=ans.size()-1;i>=0;i--){
             res+=ans[i];
            if(i>0) res+=" ";
       }
       return res;
    }
};