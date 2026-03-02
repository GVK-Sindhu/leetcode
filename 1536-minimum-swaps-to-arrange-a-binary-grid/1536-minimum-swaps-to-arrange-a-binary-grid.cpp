class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int>tz;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            int zc=0;
            for(int j=col-1;j>=0;j--){
                if(grid[i][j]==0){
                    zc++;
                }
                else{
                    break;
                }
            }
            tz.push_back(zc);
        }
        int minswap=0;
        for(int i=0;i<row;i++){
            if(tz[i]!=(row-i-1)){
                int idx;
                bool found=false;
                for(int j=i;j<row;j++){
                    if(tz[j]>=row-i-1){
                        idx=j;
                        found=true;
                        break;
                    }
                }
                if(!found){
                    return -1;
                }
                minswap+=(idx-i);
                int val=tz[idx];
                tz.erase(tz.begin()+idx);
                tz.insert(tz.begin()+i,val);
            }
        }
        return minswap;
    }
};