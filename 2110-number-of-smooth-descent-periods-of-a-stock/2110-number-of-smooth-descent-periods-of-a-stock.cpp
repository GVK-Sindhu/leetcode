class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long l=0,r=1,c=0;
        int n=prices.size();
        long long maxlen=0;
        while(r<n){
            if(prices[r-1]-prices[r]==1){
                maxlen=max(maxlen,(r-l+1));

            }
            else{
                if(maxlen>0){
                    c+=(((maxlen*(maxlen+1))/2)-1);
                }
                maxlen=0;
                l=r;
                c++;
                cout<<l<<" "<<r<<" "<<c<<endl;
            }
            r++;
        }
         if(maxlen>0){
                    c+=(((maxlen*(maxlen+1))/2)-1);
                }
        return c+1;
    }
};