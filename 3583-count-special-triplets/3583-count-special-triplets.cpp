const int mod=1e9+7;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n=nums.size();
        long long c=0;
        unordered_map<int,int>rightfreq;
        for(int i=0;i<n;i++){
            rightfreq[nums[i]]++;
        }
        unordered_map<int,int>leftfreq;
        for(int j=0;j<n;j++){
            int mid=nums[j];
            rightfreq[mid]--;
            int target=mid*2;
            int left=leftfreq[target];
            int right=rightfreq[target];
            c=(c+1LL*left*right)%mod;
            leftfreq[mid]++;
        }
        return (int)c;
    }
};