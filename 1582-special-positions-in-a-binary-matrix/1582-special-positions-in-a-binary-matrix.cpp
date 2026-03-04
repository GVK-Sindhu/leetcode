class Solution {
public:
    bool isrow(int i,int j,int row,int col,vector<vector<int>>& mat){
        int oc=0;
        for(int j=0;j<col;j++){
            if(mat[i][j]==1){
                oc++;
            }
        }
        if(oc>=2) return false;
        return true;
    }
    bool iscol(int i,int j,int row,int col,vector<vector<int>>& mat){
        int oc=0;
        for(int i=0;i<row;i++){
            if(mat[i][j]==1){
                oc++;
            }
        }
        if(oc>=2) return false;
        return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int c=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    if(isrow(i,j,row,col,mat) && iscol(i,j,row,col,mat)){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};