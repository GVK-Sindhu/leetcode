class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int tmp=k;
        while(find(nums.begin(),nums.end(),k)!=nums.end()){
                k=k+tmp;
            }
        return k;
    }
};