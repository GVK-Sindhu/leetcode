class Solution {
public:
    bool ispower(int n){
        if(n==1){
            return true;
        }
        if(n<=0 || n%2!=0){
            return false;
        }
        return ispower(n/2);
    }
    bool isPowerOfTwo(int n) {
      return ispower(n);
    }
};