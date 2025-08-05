class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        vector<bool>basketused(n,false);
        int unplaced=0;
        for(int it:fruits){
            bool placed=false;
            for(int i=0;i<n;++i){
                if(!basketused[i]&&baskets[i]>=it){
                    basketused[i]=true;
                    placed=true;
                    break;
                }
            }
            if(!placed){
                unplaced++;
            }
        }
        return unplaced;
    }
};