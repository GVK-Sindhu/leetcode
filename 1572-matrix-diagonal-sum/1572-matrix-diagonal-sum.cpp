class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int s1=0;
        for(int i=0;i<m;i++){
            s1+=mat[i][i];
            s1+=mat[i][n-i-1];
        }
        if(m%2!=0){
            s1-=mat[m/2][m/2];
        }
        return s1;
    }
};