class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        else if(nums[0]>nums[1]) return 0;
        else if(nums[n-1]>nums[n-2]) return n-1;
        int l=1,h=n-2;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){//peak point
                return mid;
            }
            else if(nums[mid]>nums[mid+1]){ //decrease slope
                h=mid;
            }
            else if(nums[mid]<nums[mid+1] && nums[mid-1]<nums[mid]){ //increase slope
               l=mid+1;
            }
            else{//reverse peak point 1 5 1 2 1
              l=mid+1;
            }
        }
        return -1;
    }
};