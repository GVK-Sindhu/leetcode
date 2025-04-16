class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        set<int>s;
        if(s.size()==nums.size()){
            return 0;
        }
        long long c=0,res=0;
        unordered_map<int,int>freq;
        int left=0;
        for(int right=0;right<nums.size();right++){
            c+=freq[nums[right]];
            freq[nums[right]]++;
            while(c>=k){
                res+=nums.size()-right;
                freq[nums[left]]--;
                c-=freq[nums[left]];           
                left++;
            }
        }

        return res;
    }
};