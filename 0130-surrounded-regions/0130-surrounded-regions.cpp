class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&board,vector<pair<int,int>>& region,
             bool &isgood){
        int n=board.size();
        int m=board[0].size();
        vis[r][c]=1;
        region.push_back({r,c});
         if(r == 0 || r == n-1 || c == 0 || c == m-1) {
            isgood = false;
        }
        int delrow[]={-1,0,1,0};
        int delcol[]={0,-1,0,1};
        for(int i=0;i<4;i++){
            int newr=r+delrow[i];
            int newc=c+delcol[i];
            // if(newr<n && newr>=0 && newc<m && newc>=0 && !vis[newr][newc] && board[newr][newc]=='O'){
            //     if(newr==0 || newr=n-1 && newc==0 && newc==m-1){
            //         isgood=false;
            //     }
            //     vis[newr][newc]=1;
            //     dfs(newr,newc,vis,board);
            // }
            if(newr >= 0 && newr < n && newc >= 0 && newc < m &&
               !vis[newr][newc] && board[newr][newc] == 'O') {

                dfs(newr, newc, vis,board, region, isgood);
            }
        }
        // if(isgood){
        //     board[r][c]='X'
        // }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && !vis[i][j]){
                    vector<pair<int,int>>region;
                    bool isgood=true;
                    dfs(i,j,vis,board,region,isgood);
                    if(isgood){
                        for(auto it:region){
                            board[it.first][it.second]='X';
                        }
                    }
                    
                }
            }
        }
    }
};