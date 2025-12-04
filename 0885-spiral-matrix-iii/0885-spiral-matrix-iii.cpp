class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>>res;
        int mov=1;
        int i=rStart,j=cStart;
        while(res.size()<(rows*cols)){
            int tmp1=mov;
            int tmp2=mov;
            while(tmp1--){
               if(i>=0 && j>=0 && i<rows && j<cols){
                 res.push_back({i,j});
               } 
               j++;
            }
            while(tmp2--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                    res.push_back({i,j});
                }
                i++;
            }
            mov++;
            int tmp3=mov;
            int tmp4=mov;
            while(tmp3--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                   res.push_back({i,j}); 
                }
                j--;
            }
            while(tmp4--){
                if(i>=0 && j>=0 && i<rows && j<cols){
                    res.push_back({i,j});
                }
                i--;
            }
            mov++;
        }
        return res;
    }
};

