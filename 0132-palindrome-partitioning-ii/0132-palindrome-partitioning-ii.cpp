class Solution {
public:
    vector<vector<int>> pal;

    bool ispal(int i, int j, string &s) {
        if(i >= j) return true;

        if(pal[i][j] != -1)
            return pal[i][j];

        if(s[i] != s[j])
            return pal[i][j] = false;

        return pal[i][j] = ispal(i+1, j-1, s);
    }
    int solve(int i,string s,int n,vector<int>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int mincuts=INT_MAX;
        for(int j=i;j<n;j++){
            if(ispal(i,j,s)){
                int ways=1+solve(j+1,s,n,dp);
                mincuts=min(mincuts,ways);
            }
        }
        return dp[i]=mincuts;
    }
    int minCut(string s) {
        int n=s.size();
        vector<int>dp(n+1,0);
        // return solve(0,s,n,dp)-1;
        pal.assign(n, vector<int>(n, -1));
        for(int i=n-1;i>=0;i--){
            int mincuts=INT_MAX;
            for(int j=i;j<n;j++){
                if(ispal(i,j,s)){
                    int ways=1+dp[j+1];
                    mincuts=min(mincuts,ways);
                }
            }
            dp[i]=mincuts;
        }
        return dp[0]-1;
    }
};