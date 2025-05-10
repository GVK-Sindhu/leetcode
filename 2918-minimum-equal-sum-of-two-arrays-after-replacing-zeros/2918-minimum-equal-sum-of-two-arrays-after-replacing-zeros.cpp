class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long c1=0,c2=0,s1=0,s2=0;
        for(long long it:nums1){
            if(it==0){
                c1++;
                s1++;
            }
            else{
                s1+=it;
            }
        }
        for(long long it:nums2){
            if(it==0){
                c2++;
                s2++;
            }
            else{
                s2+=it;
            }
        }
        // if((s2>s1 && !c1) || (s1>s2 && !c2)){  
        //     return -1;
        // }
        if(c1==0 && c2==0){
            return s1==s2?s1:-1;
        }
        else if(c2==0){
            return s1<=s2?s2:-1;
        }
        else if(c1==0){
            return s2<=s1?s1:-1;
        }
        else{
            return max(s1,s2);
        }

    }
};