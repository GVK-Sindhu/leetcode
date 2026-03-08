class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single=0;
        for(int it:nums){
            single^=it;
        }
        return single;
    }
};