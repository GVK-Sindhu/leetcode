class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(),h.end(),greater<int>());
        long long i=0,s=0,c=0;
        while(k--){
            s+=((h[i]-c)>0?(h[i]-c):0);
            i++;
            c++;
        }
        return s;
    }
};