class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            int ec=0;
            int oc=0;
            unordered_map<int,int>freq;
            for(int j=i;j<n;j++){
                if(freq.find(nums[j])==freq.end()){
                    if(nums[j]%2==0) ec++;
                    else oc++;
                }
                freq[nums[j]]=1;
                if(ec==oc){
                    maxlen=max(maxlen,j-i+1);
                    // cout<<i<<" "<<j<<"\n";
                }
            }
        }
        return maxlen;
    }
};