class Solution {
public:
    bool isinc(vector<int>& a,int start,int k){
        for(int i=start;i<start+k-1;i++){
            if(a[i]>=a[i+1]) return false;
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& a, int k) {
        int n=a.size();
        for(int i=0;i+2*k<=n;i++){
          if(isinc(a,i,k) && isinc(a,i+k,k)){
            return true;
          }
        }
        return false;
    }
};