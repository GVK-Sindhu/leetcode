class Solution {
public:
    vector<string> createGrid(int n, int m) {
       vector<string>grid(n,string(m,'#'));
       for(int i=0;i<n;i++){
         grid[i][m-1]='.';
       }
       for(int j=0;j<m;j++){
         grid[0][j]='.';
       }
       return grid;
    }
};

//     0   1   2   3
// 0   .   .   .   .
// 1               .
// 2               .
// 3               .
// 4               .