class Solution {
public:
    int countOperations(int num1, int num2) {
        long long c=0;
        while(num1!=0 && num2!=0){
            if(num1>=num2){
                num1=abs(num2-num1);
                c++;
            }
            else{
                num2=abs(num1-num2);
                c++;
            }
        }
        return c;
    }
};