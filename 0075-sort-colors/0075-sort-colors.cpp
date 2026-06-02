class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int rc=0,wc=0,bc=0;
        for(int it:nums){
            if(it==0){
                rc++;
            }
            else if(it==1){
                wc++;
            }
            else{
                bc++;
            }
        }
        for(int i=0;i<n;i++){
            if(rc>0){
                nums[i]=0;
                rc--;
            }
            else if(wc>0){
                nums[i]=1;
                wc--;
            }
            else if(bc>0){
                nums[i]=2;
                bc--;
            }
        }
    }
};