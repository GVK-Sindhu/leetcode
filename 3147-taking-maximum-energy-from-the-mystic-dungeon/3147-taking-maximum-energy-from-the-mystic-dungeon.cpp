class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int maxs=INT_MIN;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j+=k){
                s+=energy[j];
            }
            maxs=max(maxs,s);
        }
        return maxs;
    }
};