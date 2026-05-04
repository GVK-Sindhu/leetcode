class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {
        vector<int>minelerow;
        int n=mat.size(); //row
        int m=mat[0].size(); //col
        for(int i=0;i<n;i++){
            int minele=INT_MAX;
            for(int j=0;j<m;j++){
                if(mat[i][j]<minele){
                    minele=mat[i][j];
                }
            }
            minelerow.push_back(minele);
        }
        vector<int>maxelecol;
        for(int i=0;i<m;i++){
            int maxele=0;
            for(int j=0;j<n;j++){
                if(mat[j][i]>maxele){
                    maxele=mat[j][i];
                }
            }
            maxelecol.push_back(maxele);
        }
        vector<int>res;
        for(int it:minelerow){
            if(find(maxelecol.begin(),maxelecol.end(),it)!=maxelecol.end()){
                res.push_back(it);
            }
        }
        return res;
    }
};