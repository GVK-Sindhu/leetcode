class Solution {
public:
    int solve(int i,int j,string w1,string w2,vector<vector<int>>&dp){
        if(i==0) return j;
        if(j==0) return i;
        if(dp[i][j]!=-1) return dp[i][j];
        if(w1[i-1]==w2[j-1]) return dp[i][j]=solve(i-1,j-1,w1,w2,dp);
        return dp[i][j]=1+min(solve(i-1,j,w1,w2,dp),min(solve(i,j-1,w1,w2,dp),solve(i-1,j-1,w1,w2,dp)));
    }
    int minDistance(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        vector<vector<int>>dp(l1+1,vector<int>(l2+1,-1));
        return solve(l1,l2,word1,word2,dp);
    }
};