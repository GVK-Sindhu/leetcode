class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int s=0,c=0;
        for(int it:costs){
            if((s+it)<=coins){
                s+=it;
                c++;
            }
            else{
                return c;
            }
        }
        return c;
    }
};