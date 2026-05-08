class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:freq){
            pq.push({it.second,it.first});
        }
        string res="";
        while(pq.size()>1){
            auto[f1,c1]=pq.top(); pq.pop();
            auto[f2,c2]=pq.top(); pq.pop();
            res+=c1;
            res+=c2;
            if(--f1>0){
                pq.push({f1,c1});
            }
            if(--f2>0){
                pq.push({f2,c2});
            }
        }
        if(!pq.empty()){
            if(pq.top().first>1) return "";
            res+=pq.top().second;
        }
        return res;
    }
};