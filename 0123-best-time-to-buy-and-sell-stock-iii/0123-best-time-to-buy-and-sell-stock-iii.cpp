// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
//         // base case i=0,cap=0
//         for(int trade=0;trade<3;trade++){
//                 dp[0][1][trade]=0;
//                 dp[0][0][trade]=-prices[0];
//         }
        
//         for(int i=0;i<n;i++){
//             for(int buy=0;buy<2;buy++){
//                 dp[i][buy][0]=0;
//             }
//         }
//         // explore all possibilities
//         for(int i=1;i<n;i++){
//                 for(int cap=1;cap<3;cap++){
//                     dp[i][1][cap]=max(-prices[i]+dp[i-1][1][cap-1],dp[i-1][0][cap]);
                    
//                     dp[i][0][cap]=max(prices[i]+dp[i-1][1][cap],dp[i-1][0][cap]);
//                 }
//         }
//         return dp[n-1][1][2];
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<vector<int>>> dp(
            n,
            vector<vector<int>>(2, vector<int>(3, 0))
        );

        for(int cap = 1; cap <= 2; cap++) {
            dp[0][1][cap] = 0;          // not holding
            dp[0][0][cap] = -prices[0]; // holding
        }

        for(int i = 1; i < n; i++) {
            for(int cap = 1; cap <= 2; cap++) {

                dp[i][0][cap] =
                    max(dp[i-1][0][cap],
                        dp[i-1][1][cap-1] - prices[i]);

                dp[i][1][cap] =
                    max(dp[i-1][1][cap],
                        dp[i-1][0][cap] + prices[i]);
            }
        }

        return dp[n-1][1][2];
    }
};