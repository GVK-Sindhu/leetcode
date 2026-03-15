class NumArray {
public:
    vector<int>tmp;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            tmp.push_back(nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        int s=0;
        for(int i=left;i<=right;i++){
            s+=tmp[i];
        }
        return s;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */