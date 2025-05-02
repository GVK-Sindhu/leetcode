class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int max=0;
        for(int it:candies){//tc o(2n)
            if(it>max){
                max=it;
            }
        }
        for(int it:candies){
            if((it+extraCandies)>=max){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
        // for(int it:candies){//2 tc:o(n^2)
        //     int i=(it+extraCandies);//2+3
        //     int flag=0;
        //     for(int it:candies){
        //         if(i<it){
        //             flag=1;
        //         }
        //     }
        //      if(flag==1){
        //     res.push_back(false);
        //     }
        //     else{
        //         res.push_back(true);
        //     }
        // }
       
        // return res;
    }
};