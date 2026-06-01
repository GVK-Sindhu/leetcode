class Solution {
public:
    int solve(int i,int j,string s,string t,vector<vector<int>>&dp){
        if(i<0 || j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            return dp[i][j]=1+solve(i-1,j-1,s,t,dp);
        }   
        return dp[i][j]=max(solve(i-1,j,s,t,dp),solve(i,j-1,s,t,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int len1=text1.size();
        int len2=text2.size();
        vector<vector<int>>dp(len1+1,vector<int>(len2+1,-1));
        // return solve(len1-1,len2-1,text1,text2,dp);
        for(int j=0;j<=len2;j++){
            dp[0][j]=0;
        }
        for(int i=0;i<=len1;i++){
            dp[i][0]=0;
        }

        for(int i=1;i<=len1;i++){
            for(int j=1;j<=len2;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[len1][len2];

    }
};