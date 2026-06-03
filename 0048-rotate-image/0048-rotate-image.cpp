class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>>tmp(r,vector<int>(c,0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                tmp[i][j]=matrix[j][i];
            }
            reverse(tmp[i].begin(),tmp[i].end());
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j]=tmp[i][j];
            }
        }
    }
};