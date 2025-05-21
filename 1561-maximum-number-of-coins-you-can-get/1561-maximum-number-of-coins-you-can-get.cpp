class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        // int res=0;
        // int n=piles.size()/3;
        // for(int i=n;i<piles.size();i+=2){
        //     res+=piles[i];
        // }
        // return res;
        deque<int>queue;
        for(int it:piles){
            queue.push_back(it);
        }
        int res=0;
        while(!queue.empty()){
            queue.pop_back();
            res+=queue.back();
            queue.pop_back();
            queue.pop_front();
        }
        return res;
    }
};
