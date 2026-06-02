class Solution {
public:
    int dp[1001][1501][2];
    int solve(int i,int tar,vector<vector<int>>&items,vector<int>&bonus,int state){
        if(i>=items.size()) return 0;
        if(tar<=0) return 0;
        if(dp[i][tar][state]!=-1){
            return dp[i][tar][state];
        }
        int pick=0;
        if(items[i][1]<=tar){
            if(state==0){
                pick=1+bonus[i]+solve(i,tar-items[i][1],items,bonus,1);
            }
            else{
                pick=pick+1+solve(i,tar-items[i][1],items,bonus,state);
            }
        }
        int notpick=solve(i+1,tar,items,bonus,0);
        return dp[i][tar][state]=max(pick,notpick);
    }
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        vector<int>bonus(items.size(),0);
        int n=items.size();
        for(int i=0;i<n;i++){
            int facti=items[i][0];
            for(int j=0;j<n;j++){
                if(i!=j && items[j][0]%facti==0){
                    bonus[i]++;
                }
            }
        }
        memset(dp,-1,sizeof(dp));
        return solve(0,budget,items,bonus,0);
    }
};

