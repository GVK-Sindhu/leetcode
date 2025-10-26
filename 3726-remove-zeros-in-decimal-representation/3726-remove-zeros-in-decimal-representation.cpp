class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string res="";
        for(auto it:s){
            if(it=='0'){
                continue;
            }
            else{
                res+=it;
            }
        }
        long long ans=stoll(res);
        return ans;
    }
};