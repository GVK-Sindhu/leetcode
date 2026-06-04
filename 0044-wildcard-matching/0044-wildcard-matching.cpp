class Solution {
public:
    int solve(int i,int j,string s,string p,vector<vector<int>>&dp){
        if(i==0 && j==0){
            return true;
        }
        if(i==0){
            for(int k=1;k<=j;k++){
                if(p[k-1]!='*'){
                    return false;
                }
            }
            return true;
        }
        if(j==0){
            return false;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s[i-1]==p[j-1] || p[j-1]=='?'){
            return dp[i][j]=solve(i-1,j-1,s,p,dp);
        }
        else if(p[j-1]=='*'){
            return dp[i][j]=solve(i-1,j,s,p,dp) || solve(i,j-1,s,p,dp);
        }
        return dp[i][j]=false;
    }
    bool isMatch(string s, string p) {
        int l1=s.size();
        int l2=p.size();
        vector<vector<bool>>dp(l1+1,vector<bool>(l2+1,false));
        // return solve(l1,l2,s,p,dp)==1?true:false;
        dp[0][0]=true;
        for(int j=1;j<=l2;j++){
            if(p[j-1]=='*'){
                dp[0][j]= dp[0][j-1];
            }
        }
        for(int i=1;i<=l1;i++){
            dp[i][0]=false;
        }
        for(int i=1;i<=l1;i++){
            for(int j=1;j<=l2;j++){
                if(s[i-1]==p[j-1] || p[j-1]=='?'){
                     dp[i][j]=dp[i-1][j-1];
                }
                else if(p[j-1]=='*'){
                     dp[i][j]=dp[i-1][j] || dp[i][j-1];
                }
                else dp[i][j]=false;
            }
        }
        return dp[l1][l2];
    }
};