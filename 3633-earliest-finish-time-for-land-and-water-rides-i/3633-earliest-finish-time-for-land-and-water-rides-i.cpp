class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        int res=INT_MAX;
        int minlf=INT_MAX;
        for(int i=0;i<ls.size();i++){
            if((ls[i]+ld[i])<minlf){
                minlf=ls[i]+ld[i];
            }
        }
        for(int i=0;i<ws.size();i++){
            res=min(res,max(minlf,ws[i])+wd[i]);
        }
        int minwf=INT_MAX;
        for(int i=0;i<ws.size();i++){
            if((wd[i]+ws[i])<minwf){
                minwf=wd[i]+ws[i];
            }
        }
        for(int i=0;i<ls.size();i++){
            res=min(res,max(minwf,ls[i])+ld[i]);
        }
        return res;
    }
};