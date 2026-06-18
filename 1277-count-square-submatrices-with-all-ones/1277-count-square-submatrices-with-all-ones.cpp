class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<vector<int>>dp(r,vector<int>(c,0));
        for(int j=0;j<c;j++){
            if(mat[0][j]==1) dp[0][j]=1;
        }
        for(int i=0;i<r;i++){
            if(mat[i][0]==1) dp[i][0]=1;
        }
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(mat[i][j]==1){
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
            }
        }
        int s=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                s+=dp[i][j];
            }
        }
        return s;
    }
};