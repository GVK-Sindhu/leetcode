class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int need=t.size();
        int minlen=INT_MAX;
        vector<int>hash(256,0);
        int l=0,r=0,start=0;
        for(char c:t){
            hash[c]++;
        }
        while(r<n){
            if(hash[s[r]]>0){
                need--;
            }
            hash[s[r]]--;
            while(need==0){
                if((r-l+1)<minlen){
                    minlen=(r-l+1);
                    start=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    need++;
                }
                l++;
            }
            r++;
        }
        return minlen==INT_MAX?"":s.substr(start,minlen);

    }
};