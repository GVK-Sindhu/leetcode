class Solution {
public:
    int longestSubsequence(string s, int k) {
        if(s.empty()){
            return 0;
        }
            int res=0;
            int zeroc=count(s.begin(),s.end(),'0');
            int sum=0;
            reverse(s.begin(),s.end());
            for(int i=0;i<s.size();i++){
                if(sum+pow(2,i)>k){
                    break;
                }
                if(s[i]=='1'){
                    sum+=pow(2,i);
                    res++;
                }
            }
            cout<<zeroc<<res;
        
        return zeroc+res;

    }
};