class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>freq1(n+1,0);
        vector<int>freq2(n+1,0);
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            freq1[A[i]]++;
            freq2[B[i]]++;
            int res=0;
            for(int j=1;j<=n;j++){
                if(freq1[j]>0 && freq2[j]>0){
                    res++;
                }
                // cout<<freq1[i]<<" "<<freq2[i];
            }
            // cout<<"\n";
            ans[i]=res;
        }
        return ans;
    }
};