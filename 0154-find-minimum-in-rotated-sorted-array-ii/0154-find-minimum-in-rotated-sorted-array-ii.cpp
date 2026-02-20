class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;    
        int h=nums.size()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(l<h && nums[mid]==nums[l] && nums[mid]==nums[h]){
                l++;
                h--;
            }
            else if(nums[mid]>nums[h]){
                l=mid+1;
            }
            else{
                h=mid;
            }
            // cout<<l<<" "<<mid<<" "<<h<<"\n";
        }
        return nums[l];
    }
};