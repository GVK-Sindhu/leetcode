class Solution {
    private:
      void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&grid){
            vis[r][c]=1;
            int n=grid.size();
            int m=grid[0].size();
            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                 int newr=r+delrow[i];
                 int newc=c+delcol[i];
                  if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]=='1' && !vis[newr][newc]){
                        vis[newr][newc]=1;
                        dfs(newr,newc,vis,grid);
                    }
            }
      }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    c++;
                    dfs(i,j,vis,grid);
                }
            }
        }
        return c;
    }
};