class Solution {
public:
    bool solve(int mid,vector<int>&piles,int hr){
        long long reqhr=0;
        for(int it:piles){
            reqhr+=(it+mid-1)/mid;
        }
        return reqhr<=hr;
    }
    int minEatingSpeed(vector<int>& piles, int hr) {
        long long l=1,h=*max_element(piles.begin(),piles.end());
        long long minres=INT_MAX;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(solve(mid,piles,hr)){
                minres=min(minres,mid);
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return minres;
    }
};