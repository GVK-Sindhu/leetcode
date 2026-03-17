class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxfar=0;
        int res=0;
        for(int i=0;i<arr.size();i++){
            maxfar=max(maxfar,arr[i]);
            if(maxfar==i){
                res++;
            }
        }
        return res;
    }
};