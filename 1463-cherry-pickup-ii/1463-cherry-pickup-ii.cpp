class Solution {
public:
    int solve(int i,int j1,int j2,int r,int c,vector<vector<int>>& grid,vector<vector<vector<int>>>&dp){
        // base case
        if(j1<0 || j1>=c || j2<0 || j2>=c){
            return -1e8;
        }
        if(i==r-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1){
            return dp[i][j1][j2];
        }
        // explore all path and take max
        int maxi=-1e8;
        for(int dj1=-1;dj1<=1;dj1++){
            for(int dj2=-1;dj2<=1;dj2++){
                int val=0;
                if(j1==j2) val=grid[i][j1];
                else val=grid[i][j1]+grid[i][j2];
                val+=solve(i+1,j1+dj1,j2+dj2,r,c,grid,dp);
                maxi=max(maxi,val);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
        // return solve(0,0,c-1,r,c,grid,dp);
        // tabulation

    // base case for last row
        for(int j1=0;j1<c;j1++){
            for(int j2=0;j2<c;j2++){
                if(j1==j2) dp[r-1][j1][j2]=grid[r-1][j1];
                else dp[r-1][j1][j2]=grid[r-1][j1]+grid[r-1][j2];
            }
        }
        // exploring all paths
        for(int i=r-2;i>=0;i--){
            for(int j1=0;j1<c;j1++){
                for(int j2=0;j2<c;j2++){
                    int maxi=-1e8;
                    for(int dj1=-1;dj1<=1;dj1++){
                        for(int dj2=-1;dj2<=1;dj2++){
                            int val=0;
                            if(j1==j2) val=grid[i][j1];
                            else val=grid[i][j1]+grid[i][j2];
                        if(j1+dj1>=0 && j1+dj1<c && j2+dj2>=0 && j2+dj2<c)val+=dp[i+1][j1+dj1][j2+dj2];
                        else val+=-1e8;
                            maxi=max(maxi,val);
                        }
                    }
                     dp[i][j1][j2]=maxi;
                }
            }
        }
        return dp[0][0][c-1];

        // space optimization 3d->2d

        vector<vector<int>>prev(c,vector<int>(c,-1));
        vector<vector<int>>cur(c,vector<int>(c,-1));
        for(int j1=0;j1<c;j1++){
            for(int j2=0;j2<c;j2++){
                if(j1==j2) prev[j1][j2]=grid[r-1][j1];
                else prev[j1][j2]=grid[r-1][j1]+grid[r-1][j2];
            }
        }
        // exploring all paths
        for(int i=r-2;i>=0;i--){
            for(int j1=0;j1<c;j1++){
                for(int j2=0;j2<c;j2++){
                    int maxi=-1e8;
                    for(int dj1=-1;dj1<=1;dj1++){
                        for(int dj2=-1;dj2<=1;dj2++){
                            int val=0;
                            if(j1==j2) val=grid[i][j1];
                            else val=grid[i][j1]+grid[i][j2];
    if(j1+dj1>=0 && j1+dj1<c && j2+dj2>=0 && j2+dj2<c) val+=prev[j1+dj1][j2+dj2];
                        else val+=-1e8;
                            maxi=max(maxi,val);
                        }
                    }
                     cur[j1][j2]=maxi;
                }
            }
            prev=cur;
        }
        return prev[0][c-1];

    }
};