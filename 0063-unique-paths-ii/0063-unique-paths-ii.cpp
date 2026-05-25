class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(i==0 && j==0 && grid[i][j]!=1) return 1;
        if(i<0 || j<0 || grid[i][j]==1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int up=solve(i-1,j,grid,dp);
        int left=solve(i,j-1,grid,dp);

        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        // vector<vector<int>>dp(r,vector<int>(c,-1));
        // return solve(r-1,c-1,grid,dp);
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(grid[i][j]==1) dp[i][j]=0;
        //         else if(i==0 && j==0 && grid[i][j]!=1) dp[i][j]=1;
        //         else{
        //             int up=0,left=0;
        //             if(i>0)  up=dp[i-1][j];
        //             if(j>0)  left=dp[i][j-1];
        //             dp[i][j]=up+left;
        //         }
        //     }
        // }
        // return dp[r-1][c-1];
        vector<int>prv(c,-1);
        for(int i=0;i<r;i++){
            vector<int>cur(c,-1);
            for(int j=0;j<c;j++){
                if(grid[i][j]==1) cur[j]=0;
                else if(i==0 && j==0) cur[j]=1;
                else{
                    int up=0,left=0;
                    if(i>0) up=prv[j];
                    if(j>0) left=cur[j-1];
                    cur[j]=up+left;
                }
            }
            prv=cur;
        }
        return prv[c-1];
    }
};