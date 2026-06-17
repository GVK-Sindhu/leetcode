class Solution {
public:
    long long maxRatings(vector<vector<int>>& units) {
        int r=units.size();
        int c=units[0].size();
        vector<int>sm1;
        vector<int>sm2;
        int gmin=INT_MAX;
        for(int i=0;i<r;i++){
            int min1=INT_MAX,min2=INT_MAX;
            for(int j=0;j<c;j++){
                if(units[i][j]<min1){
                    min2=min1;
                    min1=units[i][j];
                }
                else if(units[i][j]>=min1 && units[i][j]<min2){
                    min2=units[i][j];
                }
            }
            gmin=min(gmin,min1);
            sm1.push_back(min1);
            sm2.push_back(min2);
        }
        long long s=0;
        int minsm2=INT_MAX;
        for(int i=0;i<sm2.size();i++){
            s+=sm2[i];
            if(sm2[i]!=INT_MAX) minsm2=min(minsm2,sm2[i]);
        }

        if(minsm2==INT_MAX){
            return accumulate(sm1.begin(),sm1.end(),0LL);
        }
        long long maxi=s-minsm2+gmin;
        // for(int i=0;i<sm1.size();i++){
        //    long long curs=s-sm2[i]+gmin;
        //    maxi=max(maxi,curs);
        // }
        return maxi;
    }
};