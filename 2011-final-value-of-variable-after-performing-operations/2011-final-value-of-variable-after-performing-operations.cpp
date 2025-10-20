class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res=0;
        for(const auto &it:operations){
        if(it[1]=='+'){
            res+=1;
        }
        else{
            res-=1;
        }
        }
        return res;

    }
};