class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        int ec=0,oc=0;
        for(int it:nums){
            if(it%2==0){
                ec++;
            }
            else{
                oc++;
            }
        }
        int parity=nums[0]%2;
        int alternativec=1;
        for(int i=1;i<n;i++){
            int curparity=nums[i]%2;
            if(curparity!=parity){
                alternativec++;
                parity=curparity;
            }
        }
        return max({ec,oc,alternativec});
    }
};