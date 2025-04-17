class Solution {
public:
    bool digitCount(string num) {
      vector<int>freq(10,0);
      for(char c:num){
        freq[c-'0']++;
      }  
      for (int i = 0; i < num.length(); ++i) {
        int expected = num[i] - '0';
        if (freq[i] != expected) {
            return false;
        }
    }

    return true;

    }
};