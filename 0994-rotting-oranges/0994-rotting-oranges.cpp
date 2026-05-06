class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int freshcnt=0;
        int t=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},t});
                }
                if(grid[i][j]==1){
                    freshcnt++;
                }
            }
        }
        int tm=0;
        int cnt=0;
        int delr[]={-1,0,1,0};
        int delc[]={0,-1,0,1};
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);
            for(int i=0;i<4;i++){
            int newr=r+delr[i];
            int newc=c+delc[i];
                if(newr<n && newr>=0 && newc>=0 && newc<m
                && grid[newr][newc]==1 && vis[newr][newc]!=2){
                    cnt++;
                    vis[newr][newc]=2;
                    q.push({{newr,newc},t+1});
                }
            }
        }
        if(cnt!=freshcnt){
            return -1;
        }
        return tm;
    }
};