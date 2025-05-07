class Solution {
public:
    int convert(int it){
        int t=it;
        int s=0;
        while(t>0){
            int ld=t%10;
            s+=ld;
            t=t/10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        vector<int>res;
        for(int it:nums){
         res.push_back(convert(it));
        }
        int min=INT_MAX;
        for(int it:res){
            if(it<min){
                min=it;
            }
        }
        return min;
    }
};