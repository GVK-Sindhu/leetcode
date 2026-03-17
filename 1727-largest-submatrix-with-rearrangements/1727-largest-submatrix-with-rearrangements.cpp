class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    mat[i][j]+=mat[i-1][j];
                }
            }
        }
        int maxres=0;
        for(int i=0;i<r;i++){
            sort(mat[i].rbegin(),mat[i].rend());
            for(int j=0;j<c;j++){
                maxres=max(maxres,(mat[i][j]*(j+1)));
            }
        }
        return maxres;
    }
};