class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      string s1;
      string s2;
      for(string &it:word1) {
           s1+=it;
      }  
      for(string &it:word2){
        s2+=it;
      }
      if(s1==s2){
        return true;
      }
      else{
        return false;
      }
    }
};