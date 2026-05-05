class Solution {
    private:
      void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&grid){
         vis[r][c]='1';
         int n=grid.size();
         int m=grid[0].size();
         int delrow[]={-1,0,1,0};
         int delcol[]={0,-1,0,1};
         for(int i=0;i<4;i++){
            int newr=r+delrow[i];
            int newcol=c+delcol[i];
            if(newr>=0 && newr<n && newcol>=0 && newcol<m){
                if(!vis[newr][newcol] && grid[newr][newcol]=='1'){
                    dfs(newr,newcol,vis,grid);
                }
            }
         }
      }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,vis,grid);
                    c++;
                }
            }
        }
        return c;
    }
};