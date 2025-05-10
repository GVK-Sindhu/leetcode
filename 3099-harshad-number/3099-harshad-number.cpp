class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int temp=x,s=0;
        while(temp>0){
            int ld=temp%10;
            s+=ld;
            temp=temp/10;
        }
        if(x%s==0){
            return s;
        }
        return -1;
    }
};