class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minprice=INT_MAX,maxres=0;
        for(int i=0;i<n;i++){
            minprice=min(minprice,prices[i]);
            maxres=max(maxres,prices[i]-minprice);
        }
        return maxres;
    }
};