class Solution {
public:
    int addDigits(int num) {
        // int temp=num;
        // while(num>=10){
        //     int s=0;
        // while (num>0){
        //     s+=num%10;
        //     num/=10;
        // }
        // num=s;
        // }
        // return num;
        if(num==0) return 0;
        return (num%9==0)?9:(num%9);
    }
};