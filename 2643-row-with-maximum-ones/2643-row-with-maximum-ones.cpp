class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxrow=0,maxcount=0;
        for(int i=0;i<mat.size();i++){
            int count=onescount(mat[i]);
            if(count>maxcount){
                maxcount=count;
                maxrow=i;
            }
        }
        return {maxrow,maxcount};
    }
    public:
        int onescount(vector<int>&row){
            int c=0;
            for(int num:row){
                c+=num;
            }
            return c;
        }
};