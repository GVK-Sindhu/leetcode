class Solution {
public:
    int dp[501][501][3];
    int solve(vector<vector<int>>& coins,int i,int j,int neu,int n,int m){
        if(i==m-1 && j==n-1){
            if(coins[i][j]<0 && neu>0){
                return 0;
            }
            return coins[i][j];
        }
        if(i>=m || j>=n){
            return INT_MIN;
        }
        if(dp[i][j][neu]!=INT_MIN){
            return dp[i][j][neu];
        }
        int take=coins[i][j]+max(solve(coins,i+1,j,neu,n,m),solve(coins,i,j+1,neu,n,m));
        int skip=INT_MIN;
        if(coins[i][j]<0 && neu>0){
            int skipdown=solve(coins,i+1,j,neu-1,n,m);
            int skipright=solve(coins,i,j+1,neu-1,n,m);
            skip=max(skipdown,skipright);
        }
        return dp[i][j][neu]=max(take,skip);
    }
    int maximumAmount(vector<vector<int>>& coins) {
        int m=coins.size();
        int n=coins[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<3;k++){
                    dp[i][j][k]=INT_MIN;
                }
            }
        }
        return solve(coins,0,0,2,n,m);
    }
};