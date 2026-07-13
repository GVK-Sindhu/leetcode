class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    bool found=false;
                    int row=i;
                    int col=j;
                    if(!found){
                        for(int k=0;k<grid[0].size();k++){
                            if(grid[row][k]==1 && k!=j){
                                c++;
                                found=true;
                                break;
                            }
                        }
                    }
                    if(!found){
                        for(int x=0;x<grid.size();x++){
                            if(grid[x][col]==1 && x!=i){
                                c++;
                                found=true;
                                break;
                            }
                        }
                    }
                }
            }
        }
        return c;
    }
};