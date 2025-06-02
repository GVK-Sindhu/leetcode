class Solution {
public:
    int reverse(int n){
        int temp=n;
        int rev=0;
        while(temp>0){
            int rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
        int revdigi=reverse(nums[i]);
        nums.push_back(revdigi);
        }
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int c=0;
        for(auto it:freq){
            if(it.second==1 || it.second>1){
                c++;
            }
        }
        return c;
    }
};