class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int repeat=-1,missing=-1;
        unordered_map<int, int>freq;
        for(auto& row:grid){
            for (int i:row){
                freq[i]++;
            }
        }
        for(int i=1;i<=n*n;i++){
            if(freq.find(i)==freq.end()){
                missing=i;
            }
            else if(freq[i]==2){
                repeat=i;
            }
            
        }
        return {repeat,missing};
    }
};