class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        vector<int>temp;
        int n=nums.size();
        for(int it:nums){
            temp.push_back(it);
        }
        for(int &it:temp){
            if(it==target){
                it=1;
            }
            else{
                it=-1;
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                s+=temp[j];
                if(s>0){
                   c++; 
                }
            }
        }
        return c;
    }
};