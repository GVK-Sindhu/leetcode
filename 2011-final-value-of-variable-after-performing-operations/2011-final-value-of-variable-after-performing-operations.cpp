class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(auto it:operations){
        if(it=="--X"){
            res-=1;
        }
        else if(it=="++X"){
            res+=1;
        }
        else if(it=="X++"){
            res+=1;
        }
        else{
            res-=1;
        }
        }
        return res;

    }
};