class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        int maxl=-1;
        for(auto it:freq){
            if(it.first==it.second){
                    maxl=it.first;
            }
        }
        return maxl;
    }
};