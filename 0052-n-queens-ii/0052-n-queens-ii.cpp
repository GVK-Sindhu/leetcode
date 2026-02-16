class Solution {
public:
    void solve(int n,int row,vector<vector<char>>&board,int &res,vector<int>&colcheck,vector<int>&uppleft,vector<int>&uppright){
        if(row==n){
            res++;
            return;
        }
        for(int col=0;col<n;col++){
            if(colcheck[col]==0 && uppleft[row+col]==0 && uppright[n-1+(row-col)]==0){
                board[row][col]='Q';
                colcheck[col]=1;
                uppleft[row+col]=1;
                uppright[n-1+(row-col)]=1;
                solve(n,row+1,board,res,colcheck,uppleft,uppright);
                board[row][col]='.';
                colcheck[col]=0;
                uppleft[row+col]=0;
                uppright[n-1+(row-col)]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector<vector<char>>board(n,vector<char>(n,'.'));
        int row=0,res=0;
        vector<int>colcheck(n,0);
        vector<int>uppleft(2*n-1,0);
        vector<int>uppright(2*n-1,0);
        solve(n,row,board,res,colcheck,uppleft,uppright);
        return res;
    }
};