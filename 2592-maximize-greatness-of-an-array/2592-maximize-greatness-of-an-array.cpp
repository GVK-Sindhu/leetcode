class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i=0,j=0,c=0;
       int n=nums.size();
       while(j<n){
         if(nums[j]>nums[i]){
            c++;
            i++;
            j++;
         }
         else{
            j++;
         }
       }
       return c;
    }
};