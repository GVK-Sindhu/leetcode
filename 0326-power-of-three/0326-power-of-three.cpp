class Solution {
public:
    bool ispower(int n){
        if(n==1){
            return true;
        }
        if(n<=0 || n%3!=0) return false;
        return ispower(n/3);
    }
    bool isPowerOfThree(int n) {
        return ispower(n);
    }
};