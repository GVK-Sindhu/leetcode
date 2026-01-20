class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n); 
        int s=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
           if(nums[i]==0){
             s--;
           }
           else{
            s++;
           }
           if(s==0){
            maxlen=max(maxlen,i+1);
           }
           res[i]=s;
        }
        int l=0,r=n-1;
        while(l<r){
            if(res[l]==res[r] && res[l]!=0 && res[r]!=0){
                maxlen=max(maxlen,r-l);
                break;
            }
            if((res[l])<(res[r])){
                l++;
            }
            if((res[l])>(res[r])){
                r--;
            }
        }
        for(int it:res){
            cout<<it<<" ";
        }
        
        return maxlen;
    }
};