class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int c=0;
        int m=strs[0].size();
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++)
            {
                if(strs[j-1][i]>strs[j][i]){
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};