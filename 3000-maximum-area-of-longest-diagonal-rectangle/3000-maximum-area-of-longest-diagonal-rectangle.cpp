class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
       double maxdiag=0;
       int maxarea=0;
       for(auto &it:dimensions){
         int l=it[0];
         int w=it[1];
         double diag=sqrt(l*l+w*w);
         int area=l*w;
         if(diag>maxdiag){
            maxdiag=diag;
            maxarea=area;
         }
         else if(diag==maxdiag){
            maxarea=max(area,maxarea);
         }
       }
       return maxarea;
    }
};