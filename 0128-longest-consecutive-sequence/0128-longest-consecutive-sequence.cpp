class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxlen=0;
        for(int it:st){  
            if(st.find(it- 1)==st.end()){
                int cur=it;
                int len=1;
                while(st.find(cur+1)!=st.end()){
                    cur++;
                    len++;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};