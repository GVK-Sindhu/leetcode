class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>hash(256,0);
        for(char c:t){
            hash[c]++;
        }
        int l=0,need=t.size();
        int minlen=INT_MAX,start=0;
        for(int r=0;r<s.size();r++){
            if(hash[s[r]]>0) need--;
            hash[s[r]]--;
            while(need==0){
                if((r-l+1)<minlen){
                    minlen=r-l+1;
                    start=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) need++;
                l++;
            }
        }
        return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};