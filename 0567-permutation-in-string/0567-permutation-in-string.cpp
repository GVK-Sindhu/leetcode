class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n1=s1.size();
       vector<int>freq1(26,0);
       vector<int>freq2(26,0);
       for(int i=0;i<n1;i++){
        freq1[s1[i]-'a']++;
       }
       for(int i=0;i<s2.size();i++){
        freq2[s2[i]-'a']++;
          if(i>=s1.size()){
            freq2[s2[i-s1.size()]-'a']--;
          }
          if(freq1==freq2){
            return true;
          }
       }
       return false;

    }
};