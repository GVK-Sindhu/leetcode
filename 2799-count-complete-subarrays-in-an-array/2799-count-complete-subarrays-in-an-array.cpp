class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>freq;
        int c=0;
        set<int>s;
        int n=nums.size();
        for(int it:nums){
            s.insert(it);
        }
        for(int i=0;i<n;i++){
            unordered_map<int,int>freq;
            int unique=0;
            for(int j=i;j<n;j++)
            {
                if(++freq[nums[j]]==1){
                    unique++;
                }
                if(unique==s.size()){
                    c++;
                }
            }
        }
        return c;
    }
};