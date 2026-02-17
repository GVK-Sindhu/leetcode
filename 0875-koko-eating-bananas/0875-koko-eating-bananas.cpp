class Solution {
public:
    int solve(long long mid,vector<int>&piles,int k){
        int s=0;
        for(int it:piles){
            s+=(it+mid-1)/mid;
        }
        if(s<=k){
            return true;
        }
        else{
            return false;
        }
    }
    int minEatingSpeed(vector<int>& piles, int k) {
        int maxi=*max_element(piles.begin(),piles.end());
        long long l=1,h=maxi;
        int ans=0;
        while(l<=h){
            long long mid=(l+h)/2;
            if(solve(mid,piles,k)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};