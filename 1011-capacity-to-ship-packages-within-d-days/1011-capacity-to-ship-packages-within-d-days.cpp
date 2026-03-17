class Solution {
public:
    bool solve(int mid,vector<int>&weights,int days){
        int s=0,reqday=0;
        for(int it:weights){
            if((s+it)>mid){
                reqday++;
                s=0;
            }
            s+=it;
        }
        reqday++;
        return reqday<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int h=accumulate(weights.begin(),weights.end(),0);
        int minres=INT_MAX;
        while(l<h){
            int mid=l+(h-l)/2;
            if(solve(mid,weights,days)){
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