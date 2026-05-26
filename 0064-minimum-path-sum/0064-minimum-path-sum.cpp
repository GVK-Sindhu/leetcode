class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==0 && j==0){
            return grid[0][0];
        }
        if(i<0 || j<0) return 1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=grid[i][j]+solve(i-1,j,grid,dp);
        int left=grid[i][j]+solve(i,j-1,grid,dp);
        return dp[i][j]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,-1));
        // return solve(r-1,c-1,grid,dp);
       
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(i==0 && j==0) {
        //              dp[i][j]=grid[i][j];
        //         }
        //         else{
        //             int up=1e9,left=1e9;
        //             if(i>0) up=grid[i][j]+dp[i-1][j];
        //             if(j>0) left=grid[i][j]+dp[i][j-1];
        //             dp[i][j]=min(up,left);
        //         }
        //     }
        // }
        // return dp[r-1][c-1];

        // space optimization
        vector<int>prev(c,0);
        for(int i=0;i<r;i++){
            vector<int>cur(c,0);
            for(int j=0;j<c;j++){
                if(i==0 && j==0) cur[j]=grid[i][j];
                else{
                    int up=1e9,left=1e9;
                    if(i>0) up=grid[i][j]+prev[j];
                    if(j>0) left=grid[i][j]+cur[j-1];
                    cur[j]=min(up,left);
                }
            }
            prev=cur;
        }
        return prev[c-1];
    }
};