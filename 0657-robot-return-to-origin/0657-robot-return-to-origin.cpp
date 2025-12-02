class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0,j=0;
        for(auto it:moves){
            if(it=='R'){
                i++;
            }
            else if(it=='U'){
                j++;
            }
            else if(it=='L'){
                i--;
            }
            else{
                j--;
            }
        }
        if(i==0 && j==0){
            return true;
        }
        else{
            return false;
        }
    }
};