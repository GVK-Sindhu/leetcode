class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxfreq=0,c=0;
        for(auto it:m){
            if(it.second>maxfreq){
                maxfreq=it.second;
            }
        }
        for(auto it:m){
            if(it.second==maxfreq){
                c+=maxfreq;
            }
        }
        return c;
    }
};