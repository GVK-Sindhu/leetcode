class Solution {
public:
    bool prime(int i){
        if(i==0 || i==1){
            return false;
        }
        // if(i==2 || i==3){
        //     return true;
        // }
        for(int j=2;j*j<=i;j++){
            if(i%j==0 && i!=0){
                return false;
            }
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long s1=0,s2=0;
        for(int i=0;i<nums.size();i++){
            if(prime(i)){
                // a.push_back(nums[i]);
                s1+=nums[i];
            }
            else{
                s2+=nums[i];
            }
        }
        return abs(s1-s2);
    }
};