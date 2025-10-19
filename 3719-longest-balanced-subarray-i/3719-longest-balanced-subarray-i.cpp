class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxlen=0;
        int ec=0,oc=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int>evenset,oddset;
            for(int j=i;j<n;j++){
                 if(nums[j]%2==0){
                    evenset.insert(nums[j]);
                }
                else{
                    oddset.insert(nums[j]);
                }
                if(evenset.size()==oddset.size()){
                    maxlen=max(maxlen,j-i+1);
                }
            }
            
        }
        return maxlen;
    }
};