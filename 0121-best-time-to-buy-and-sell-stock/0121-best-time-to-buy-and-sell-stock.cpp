class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mincost=INT_MAX;
        int maxpro=0;
        for(int i=0;i<n;i++){
            mincost=min(mincost,prices[i]);
            maxpro=max(maxpro,prices[i]-mincost);
        }
        return maxpro;   
    }
};