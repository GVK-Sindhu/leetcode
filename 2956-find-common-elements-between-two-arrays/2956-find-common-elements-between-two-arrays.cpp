class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int>s1(nums1.begin(),nums1.end());
       unordered_set<int>s2(nums2.begin(),nums2.end());
       int x=0,y=0;
       for(int it:nums1){
        if(s2.count(it)){
            x++;
        }
       }
       for(int it:nums2){
        if(s1.count(it)){
            y++;
        }
       }
       return {x,y};
    }
};