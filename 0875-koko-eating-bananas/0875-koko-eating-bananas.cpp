class Solution {
public:
    bool solve(vector<int>&piles,long long mid,long long hr)
    {
        long long reqhr=0;
        for(int it:piles){
            reqhr+=(it+mid-1)/mid;
        }
        return reqhr<=hr;
    }
    int minEatingSpeed(vector<int>& piles, long long hr) {
        long long l=1,h=*max_element(piles.begin(),piles.end());
        long long res=INT_MAX;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(solve(piles,mid,hr)){
               res=min(res,mid);
               h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};