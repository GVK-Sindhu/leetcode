class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;
        for(int it:gifts){
            pq.push(it);
        }
        for(int i=0;i<k;i++){
            long long maxgift=pq.top();
            pq.pop();
            long long red=(long long)sqrt(maxgift);
            pq.push(red);
        }
        long long s=0;
       while(!pq.empty()){
           s+=pq.top();
           pq.pop();
        }
        return s;
    }
};