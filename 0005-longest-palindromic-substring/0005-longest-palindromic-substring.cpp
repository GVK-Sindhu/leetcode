class Solution {
public:
    bool ispal(int i,int j,string &s,vector<vector<int>>&dp){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i>=j){
            return dp[i][j]=true;
        }
        if(s[i]!=s[j]){
            return dp[i][j]=false;
        }
        
        return dp[i][j]=ispal(i+1,j-1,s,dp);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        int maxlen=1;
        int start=0;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispal(i,j,s,dp)){
                    if(maxlen<(j-i+1)){
                        maxlen=(j-i+1);
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
    }
};