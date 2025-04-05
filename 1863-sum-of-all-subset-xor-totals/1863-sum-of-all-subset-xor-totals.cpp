class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int s=0;
        for(int i:nums){
            s|=i;
        }
        return s<<(n-1);
        
    }
};