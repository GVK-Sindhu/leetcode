class Solution {
public:
    bool fun(vector<vector<char>>& board,string word,int idx,int i,int j){
        if(idx==word.size()){
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size()){
            return false;
        }
        if(board[i][j]==word[idx]){
            idx++;
        }
        else{
            return false;
        }
        char val=board[i][j];
        board[i][j]='.';
        bool ans=fun(board,word,idx,i-1,j) || fun(board,word,idx,i+1,j) ||  fun(board,word,idx,i,j+1)
        || fun(board,word,idx,i,j-1);
        board[i][j]=val;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(fun(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};
