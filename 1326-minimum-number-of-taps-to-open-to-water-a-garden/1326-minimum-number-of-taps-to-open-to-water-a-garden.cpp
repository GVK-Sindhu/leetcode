class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int>reach(n+1);
        for(int i=0;i<=n;i++){
            int l=max(0,i-ranges[i]);
            int r=min(n,i+ranges[i]);
            reach[l]=max(reach[l],r);
        }
        int taps=0,curend=0,nextend=0;
        for(int i=0;i<=n;i++){
            if(i>nextend) return -1; //i : cur idx >farthest reach gap present
            if(i>curend){ 
                taps++;
                curend=nextend;
            }
            nextend=max(nextend,reach[i]); //farthest we can reach
        }
        return taps;
    }
};