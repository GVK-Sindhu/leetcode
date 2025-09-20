class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int avg=0,s=0;
        int n=nums.size();
        for(int it:nums){
            s+=it;
        }
        avg=s/n;
        int res=0;
        for(int i=avg+1;i<=INT_MAX;i++){
            if(i>0 && find(nums.begin(),nums.end(),i)==nums.end()){
                res=i;
                cout<<res;
                break;
            }
        }
        return res;
    }
};