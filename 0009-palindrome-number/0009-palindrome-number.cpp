class Solution {
public:
    bool isPalindrome(int x) {
        // int tmp=x;
        // int rev=0;
        // if(tmp<0) return false;
        // while(tmp>0){
        //     int ld=tmp%10;
        //     rev=(rev*10)+ld;
        //     tmp/=10;
        // }
        // if(x==rev) return true;
        // return false;
        string tmp=to_string(x);
        string tmp2=to_string(x);
        reverse(tmp2.begin(),tmp2.end());
        return tmp==tmp2;
    }
};