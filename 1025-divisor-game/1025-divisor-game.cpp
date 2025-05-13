class Solution {
public:
    bool divisorGame(int n) {
        // int c=0;
        // while(n>0){
        // if(n%2==0){
        //     n=n-1;
        //     c++;
        // }
        // else{
        //     n=n-2;
        //     c++;
        // }
        // }
        if(n%2==0){
            return true;
        }
        else{
            return false;
        }
    }
};