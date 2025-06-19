class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int c=1;
       
        // if(k==0){
        //      set<int>s;
        //     for(int it:nums){
        //         s.insert(it);
        //     }
        //     c+=s.size();
        // }
        // else{
        int start=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]-start>k){
                c++;
                start=nums[i];
                
            }
        }
        // }
        return c;
    }
};