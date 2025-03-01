class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(1001,0);
        int s=0;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<1001;i++){
            if (freq[i]==1) {
                s+=i;
            }
        }
        return s;
    }
};