class Solution {
public:
    string triangleType(vector<int>& nums) {
        string res="";
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]<((nums[i+1])+(nums[i+2])) && (nums[i+2])<((nums[i])+(nums[i+1])) &&(nums[i+1])<((nums[i])+(nums[i+2]))){
                if(nums[i]==(nums[i+1]) && nums[i]==(nums[i+2])){
                    res+="equilateral";
                }
                else if(nums[i]==(nums[i+1]) || nums[i]==(nums[i+2]) || nums[i+1]==nums[i+2] ){
                    res+="isosceles";
                }
                else{
                    res+="scalene";
                }
            }
            else{
                res+="none";
            }
        }
        
        return res;
    }
};