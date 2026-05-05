class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        vector<int>res;
        int j=0;
        for(int i=0;i<n;i++){
            while(!dq.empty() && dq.back()<nums[i]){
                dq.pop_back();
            }
          dq.push_back(nums[i]);
          if((i-j+1)==k){
            res.push_back(dq.front());
            if(dq.front()==nums[j]){
                dq.pop_front();
            }
            j++; 
          }
        }
        return res;
    }
};