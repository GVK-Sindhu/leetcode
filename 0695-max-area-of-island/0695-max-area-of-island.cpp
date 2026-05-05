class Solution {
    private:
     int dfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&grid){
        int cnt=1;
        int n=grid.size();
        int m=grid[0].size();
        vis[r][c]=1;
        int dirrow[]={-1,0,1,0};
        int dircol[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int newr=r+dirrow[i];
            int newc=c+dircol[i];
            if(newr>=0 && newr<n && newc>=0 && newc<m && !vis[newr][newc] && grid[newr][newc]==1){
                cnt+=dfs(newr,newc,vis,grid);
            }
        }
        return cnt;
     }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    res=max(res,dfs(i,j,vis,grid));
                }
            }
        }
        return res;
    }
};