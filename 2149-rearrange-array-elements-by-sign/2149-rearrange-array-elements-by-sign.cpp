class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>p;
        vector<int>n;
        vector<int>res;
        for(auto it:nums){
            if(it>0){
                p.push_back(it);
            }
            else{
                n.push_back(it);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            res.push_back(p[i]);
            res.push_back(n[i]);
        }
        return res;
    }
};