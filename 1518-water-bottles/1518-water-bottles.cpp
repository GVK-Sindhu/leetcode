class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int c=numBottles;
        vector<int>res;
        while(numBottles>=numExchange){
            res.push_back((numBottles/numExchange));
            c+=(numBottles/numExchange);
            numBottles=((numBottles/numExchange)+(numBottles%numExchange));
            
        }
        for(int it:res){
            cout<<it<<"\n";
        }
        return c;
    }
};