class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,n=s.size();
        vector<int>freq(26,0);
        int maxf=0,maxlen=0;
        while(r<n){
            freq[s[r]-'A']++;
            maxf=max(maxf,freq[s[r]-'A']);
            int len=(r-l)+1;
            if(len-maxf<=k){
                maxlen=max(maxlen,len);
            }
            if(len-maxf>k){
                freq[s[l]-'A']--;
                l++;
            }
            r++;
        }
        return maxlen;
    }
};