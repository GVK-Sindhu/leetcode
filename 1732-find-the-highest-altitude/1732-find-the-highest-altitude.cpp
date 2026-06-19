class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int runs=gain[0];
       int maxruns=max(0,gain[0]);
       for(int i=1;i<gain.size();i++){
          runs+=gain[i];
          maxruns=max(maxruns,runs);
       } 
       return maxruns;
    }
};