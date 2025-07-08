class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>& a,vector<int>& b){
            return a[1]>b[1];
        });
        int totalunits=0;
        for(auto it:boxTypes){
            int n=it[0];
            int u=it[1];
            int minboxtake=min(truckSize,n);
            totalunits+=minboxtake*u;
            truckSize-=minboxtake;
            if(truckSize==0){
                break;
            }
        }
        return totalunits;

    }
};