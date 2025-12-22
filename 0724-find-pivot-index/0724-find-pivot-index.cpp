class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        int res=-1,ls=0,rs=0;

        for(int i=0;i<n;i++){
            if(i==0 ){
                ls=0;
            }
            else{
                ls=ps[i-1];
            }
            if(i==n-1){
                rs=0;
            }
            else{
                rs=ps[n-1]-ps[i];
            }
            if(ls==rs){
                res=i;
                break;
            }
        }
        return res;
    }
};