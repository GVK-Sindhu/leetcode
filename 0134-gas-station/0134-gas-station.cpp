class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int tg=0,tc=0;
        for(int i=0;i<n;i++){
            tg+=gas[i];
            tc+=cost[i];
        }
        if(tg<tc){
            return -1;
        }
        int curgas=0,start=0;
        for(int i=0;i<n;i++){
            curgas+=gas[i]-cost[i];
            if(curgas<0){
                start=i+1;
                curgas=0;
            }
        }
        return start;
    }
};