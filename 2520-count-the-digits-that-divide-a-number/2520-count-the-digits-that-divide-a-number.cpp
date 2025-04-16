class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int c=0;
        while(temp>0){
        int ld=temp%10;
        if((num%ld)==0 && ld!=0){
            c++;
        }
        temp/=10;
        }
        return c;
    }
};