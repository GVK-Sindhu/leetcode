class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int _5dollar=0;
        int _10dollar=0;
        for(int it:bills){
            if(it==5){
                _5dollar++;
            }
            else if(it==10){
                if(_5dollar>0){
                    _5dollar--;
                    _10dollar++;
                }
                else{
                    return false;
                }
            }
            else{
                if(_5dollar>0 and _10dollar>0){
                    _5dollar--;
                    _10dollar--;
                }
                else if(_5dollar>=3){
                    _5dollar-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};