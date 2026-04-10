class Solution {
public:
    string minWindow(string s, string t) {
       int minlen=INT_MAX;
       int l=0,r=0,start=0;
       int need=t.size();
       vector<int>hash(256,0);
       for(char c:t){
        hash[c]++;
       }
       while(r<s.size()){
         if(hash[s[r]]>0) need--;
         hash[s[r]]--;
         while(need==0){
            if((r-l+1)<minlen){
                minlen=(r-l+1);
                start=l;
            }
            hash[s[l]]++;
            if(hash[s[l]]>0) need++;
            l++;
         }
         r++;
       }
       return minlen==INT_MAX?"":s.substr(start,minlen);
    }
};