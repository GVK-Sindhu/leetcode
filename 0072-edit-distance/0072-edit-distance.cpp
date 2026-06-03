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
        // vector<vector<int>>dp(l1+1,vector<int>(l2+1,0));
        // // return solve(l1,l2,word1,word2,dp);
        // for(int i=0;i<=l1;i++){
        //     dp[i][0]=i;
        // }
        // for(int j=0;j<=l2;j++){
        //     dp[0][j]=j;
        // }
        // for(int i=1;i<=l1;i++){
        //     for(int j=1;j<=l2;j++){
        //         if(word1[i-1]==word2[j-1]){
        //             dp[i][j]=dp[i-1][j-1];
        //         }
        //         else{
        //             dp[i][j]=1+min(dp[i-1][j],
        //             min(dp[i][j-1],dp[i-1][j-1]));
        //         }
        //     }
        // }
        // return dp[l1][l2];

        // space optimization
        vector<int>prev(l2+1,0),cur(l2+1,0);
        for(int j=0;j<=l2;j++){
            prev[j]=j;
        }
        for(int i=1;i<=l1;i++){
            cur[0]=i;
            for(int j=1;j<=l2;j++){
                if(word1[i-1]==word2[j-1]){
                    cur[j]=prev[j-1];
                }
                else{
                    cur[j]=1+min(prev[j],
                    min(cur[j-1],prev[j-1]));
                }
            }
            prev=cur;
        }
        return prev[l2];
    }
};