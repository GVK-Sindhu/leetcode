class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0,nc=0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        long long mini=LLONG_MAX;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    nc++;
                }
                if(abs(matrix[i][j])<mini){
                    mini=abs(matrix[i][j]);
                }
            }
        }
        if(nc%2==0){
            return sum;
        }
        return sum-(2*mini);
    }
};