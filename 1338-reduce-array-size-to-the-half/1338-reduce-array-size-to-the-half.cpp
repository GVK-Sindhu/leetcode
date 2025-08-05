class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        vector<int>nums;
        for(auto it:freq){
            nums.push_back(it.second);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int c=0;
        int n=arr.size();
       int removed=0;
            for(int it:nums){
                removed+=it;
                c+=1;
                if(removed>=arr.size()/2){
                    break;
                }
            }
        
        return c;
    }
};