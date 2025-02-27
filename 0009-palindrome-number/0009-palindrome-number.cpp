class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        long long temp=x;
        while(x!=0){
            int ld=x%10;
            rev=rev*10+ld;
            x/=10;
        }
        if(rev==temp && temp>=0){
            return true;
        }
        else{
            return false;
        }
    }
};