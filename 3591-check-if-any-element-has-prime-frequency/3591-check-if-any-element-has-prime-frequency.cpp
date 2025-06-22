#include <cmath>
class Solution {
public:
    bool check(int tar){
        if(tar<=1){
            return false;
        }
        for(int i=2;i<=sqrt(tar);i++){
            if(tar%i==0){
                return false;
            }
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            int tar=it.second;
            bool res=check(tar);
            if(res==true){
                return true;
                break;
            }
        }
        return false;
    }
};