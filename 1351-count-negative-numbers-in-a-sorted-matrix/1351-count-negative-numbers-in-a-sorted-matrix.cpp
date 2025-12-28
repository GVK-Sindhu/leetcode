class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rowsize=grid.size();
        int colsize=grid[0].size();
        int i=rowsize-1;
        int j=0,res=0;
        while(i>=0 && j<colsize){
            if(grid[i][j]<0){
                res+=(colsize-j);
                i--;
            }
            else{
                j++;
            }
        }
        return res;
    }
};