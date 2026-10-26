class Solution {
public:
    void solve(vector<vector<int>>&grid,vector<vector<bool>>&vis,int r,int c,int n,int m,long long &s){
        int dirr[]={-1,0,1,0};
        int dirc[]={0,1,0,-1};
        for(int i=0;i<4;i++){
            int nr=r+dirr[i];
            int nc=c+dirc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]>0){
                vis[nr][nc]=true;
                s=s+grid[nr][nc];
                solve(grid,vis,nr,nc,n,m,s);
            }
        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
       int res=0,m=grid[0].size(),n=grid.size();
       vector<vector<bool>>vis(n,vector<bool>(m,false));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]>0 && !vis[i][j]){
                  long long s=grid[i][j];
                  vis[i][j]=true;
                  solve(grid,vis,i,j,n,m,s);
                  cout<<s<<" ";
                  if(s%k==0){
                     res++;
                  }
               }
           }
       } 
       return res;
    }
};