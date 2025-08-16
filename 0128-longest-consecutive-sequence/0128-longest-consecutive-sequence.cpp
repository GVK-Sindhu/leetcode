class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int it:nums){
            s.insert(it);
        }
        int longest=0;
        int c=0;
        for(int it:s){
            if(s.find(it-1)==s.end()){
                c=1;
                int x=it;
                while(s.find(x+1)!=s.end()){
                    c++;
                    x=x+1;
                }
                longest=max(longest,c);
            }
            
        }
        return longest;        
    }
};