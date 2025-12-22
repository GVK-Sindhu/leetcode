class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row=strs.size();
        int col=strs[0].size();
        int c=0,src=0;
        vector<bool>sortedrow(row-1,false);
        for(int i=0;i<col;i++){
            bool del=false;
            for(int j=0;j<row-1;j++){
                if(!sortedrow[j] && strs[j][i]>strs[j+1][i]){
                    c++;
                    del=true;
                    break;
                }
            }
            if(!del){
                for(int k=0;k<row-1;k++){
                    sortedrow[k]=sortedrow[k] | (strs[k][i]< strs[k+1][i]);
                }
            }
        }
        return c;
    }
};