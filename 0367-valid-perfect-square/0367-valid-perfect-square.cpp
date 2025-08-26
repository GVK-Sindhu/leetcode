class Solution {
public:
    bool isPerfectSquare(int num) {
        int tmp=sqrt(num);
        if(tmp*tmp==num){
            return true;
        }
        else{
            return false;
        }
    }
};