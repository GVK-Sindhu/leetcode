class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i<j<k && (i+k)==j/2){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};