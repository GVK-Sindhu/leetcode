class Solution {
public:
    bool solve(int n,vector<int>&weights,int capacity,int days){
        int reqdays=0,curload=0;
        for(int it:weights){
            if((curload+it)>capacity){
                reqdays++;
                curload=0;
            }
            curload+=it;
        }
        reqdays++; //last load
        return (reqdays<=days);
    }
    int sum(vector<int>& weights,int n){
        int s=0;
        for(int it:weights){
            s+=it;
        }
        return s;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int l=*max_element(weights.begin(),weights.end());
        int h=sum(weights,n);
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(n,weights,mid,days)){
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