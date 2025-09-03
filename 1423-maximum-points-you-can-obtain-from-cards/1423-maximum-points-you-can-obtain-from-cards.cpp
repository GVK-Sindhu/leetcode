class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int lsum=0,rsum=0;
        for(int i=0;i<k;i++){
            lsum+=a[i];
        }
        int ans=lsum;
        int j=a.size()-1;
        for(int i=k-1;i>=0;i--){
            lsum-=a[i];
            rsum+=a[j];
            ans=max(ans,lsum+rsum);
            j--;
        }
        return ans;
    }
};