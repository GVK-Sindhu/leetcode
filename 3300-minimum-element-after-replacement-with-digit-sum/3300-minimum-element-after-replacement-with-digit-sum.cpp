class Solution {
public:
    int issum(int tmp){
        int s=0;
        while(tmp>0){
            int ld=tmp%10;
            s+=ld;
            tmp/=10;
        }
        return s;
    }
    int minElement(vector<int>& nums) {
        vector<int>res;
        for(int it:nums){
            res.push_back(issum(it));
        }
        return *min_element(res.begin(),res.end());
    }
};