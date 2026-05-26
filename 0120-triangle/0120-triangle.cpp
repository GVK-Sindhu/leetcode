class Solution {
public:
    int solve(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& triangle){
        int r=triangle.size();
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==r-1){
            return dp[r-1][j]=triangle[r-1][j];
        }
        int bottom=triangle[i][j]+solve(i+1,j,dp,triangle);
        int right=triangle[i][j]+solve(i+1,j+1,dp,triangle);
        return dp[i][j]=min(bottom,right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int r=triangle.size();
        // vector<vector<int>>dp(r,vector<int>(r,-1));
        // return solve(0,0,dp,triangle);
        // for(int j=0;j<r;j++){
        //     dp[r-1][j]=triangle[r-1][j];
        // }
        // for(int i=r-2;i>=0;i--){
        //     for(int j=i;j>=0;j--){
        //         int bottom=triangle[i][j]+dp[i+1][j];
        //         int right=triangle[i][j]+dp[i+1][j+1];
        //         dp[i][j]=min(bottom,right);
        //     }
        // }
        // return dp[0][0];

        // space optimization
        vector<int>prev(r,-1);
        for(int j=0;j<r;j++){
            prev[j]=triangle[r-1][j];
        }
        for(int i=r-2;i>=0;i--){
            vector<int>cur(i+1,-1);
            for(int j=i;j>=0;j--){
                int bottom=triangle[i][j]+prev[j];
                int right=triangle[i][j]+prev[j+1];
                cur[j]=min(bottom,right);
            }
            prev=cur;
        }
        return prev[0];
    }
};