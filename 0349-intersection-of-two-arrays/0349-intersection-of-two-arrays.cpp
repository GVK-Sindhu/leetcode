class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int c=0;
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    res.push_back(nums1[i]);
                    c++;
                }
            }
        }
        set<int>uniqueele(res.begin(),res.end());
        vector<int>res1(uniqueele.begin(),uniqueele.end());
        return res1;
    }
};