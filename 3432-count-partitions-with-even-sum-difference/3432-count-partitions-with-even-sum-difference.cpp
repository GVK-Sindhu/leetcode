class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int c=0,mov=1;
      
        while(mov<n){
              int s1=0,s2=0;
        for(int i=0;i<mov;i++){
            s1+=nums[i];
        }
        for(int j=mov;j<n;j++){
            s2+=nums[j];
        }
        mov++;
        int diff=abs(s2-s1);
        cout<<s2-s1<<" ";
        if(diff%2==0){
            c++;
        }
        }
        return c;
    }
};