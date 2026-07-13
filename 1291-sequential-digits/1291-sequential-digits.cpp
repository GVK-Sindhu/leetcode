class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        for(int i=1;i<=8;i++){
            q.push(i);
        }
        vector<int>res;
        while(!q.empty()){
            int tmp=q.front();
            q.pop();
             if(tmp>=low && tmp<=high){
                res.push_back(tmp);
            }
            if(tmp>high) continue;
                int ld=tmp%10;
                if((ld+1)<=9) q.push(tmp*10+(ld+1));
        }
        return res;
    }
};