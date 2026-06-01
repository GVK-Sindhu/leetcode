class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int tc=0;
        int n=cost.size();
        if(n<=2){
            return accumulate(cost.begin(),cost.end(),0);
        }
        sort(cost.begin(),cost.end(),greater<int>());
        int idx=0;
        for(int i=0;i<n-2;i+=3){
            tc+=cost[i];
            tc+=cost[i+1];
            idx=i+3;
        }
        for(int i=idx;i<n;i++){
            tc+=cost[i];
        }
        return tc;
    }
};

// [2,10,5,4,3,10,5,10]

// 10,10, 10, 5,5, 4, 3,2