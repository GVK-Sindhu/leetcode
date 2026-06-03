class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        int lf=INT_MAX;
        for(int i=0;i<ls.size();i++){
            lf=min(lf,(ls[i]+ld[i]));
        }
        int wf=INT_MAX;
        for(int i=0;i<ws.size();i++){
            wf=min(wf,(ws[i]+wd[i]));
        }
        int res=INT_MAX;
        // land->water
        for(int i=0;i<ws.size();i++){
            res=min(res,max(lf,ws[i])+wd[i]);
        }
        // water->land
        for(int i=0;i<ls.size();i++){
            res=min(res,max(wf,ls[i])+ld[i]);
        }
        return res;
    }
};