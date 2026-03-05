class Solution {
public:
    int minOperations(string s) {
        int diff1=0,diff2=0;
        for(int i=0;i<s.size();i++){
            //start with 0 even->0 odd->1
            if(i%2==0 && s[i]!='0'){
                diff1++;
            }
            if(i%2==1 && s[i]!='1'){
                diff1++;
            }
            //start with 1 even->1 odd->0
            if(i%2==0 && s[i]!='1'){
                diff2++;
            }
            if(i%2==1 && s[i]!='0'){
                diff2++;
            }
        }
        return min(diff1,diff2);
    }
};