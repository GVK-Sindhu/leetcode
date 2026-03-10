class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size();
       int m=s2.size();
       int i=0,j=0;
       vector<int>c1(26,0);
       for(int i=0;i<n;i++){
         c1[s1[i]-'a']++;
       }
       vector<int>c2(26,0);
       while(j<m){
        c2[s2[j]-'a']++;
         while((j-i+1)>n){
            c2[s2[i]-'a']--;
            i++;
         }
         if(c1==c2){
            return true;
         }
         j++;
       }
       return false;
    }
};