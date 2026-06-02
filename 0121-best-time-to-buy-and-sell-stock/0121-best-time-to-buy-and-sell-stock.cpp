class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int n=prices.size();
        int maxprofit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            maxprofit=max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
};