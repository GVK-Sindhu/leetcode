class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s=0;
        int s1=0;
        for(auto it:nums){
            s+=it;
            int t=it;
            int ld=0;
            while(t>0){
                ld+=t%10;
                t=t/10;
            }
            s1+=ld;

        }
        return s-s1;
    }
};