class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0;
        vector<int>hash(256,0);
        int maxlen=0;
        while(r<n){
            while(hash[s[r]]==1){
                hash[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,(r-l+1));
            hash[s[r]]++;
            r++;
        }
        return maxlen;
    }
};