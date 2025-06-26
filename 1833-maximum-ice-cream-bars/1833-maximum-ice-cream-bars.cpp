class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int s=0,c=0;
        for(int i=0;i<costs.size();i++){
            s+=costs[i];
            if(s>coins) return c;
            else c++;
        }
        return c;
    }
};