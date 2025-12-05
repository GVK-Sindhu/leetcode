class Solution {
public:
    vector<int> busiestServers(int k, vector<int>& a, vector<int>& l) {
        int n=a.size();
        set<int>s;
        map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>res;
        if(n>=k){
        for(int i=0;i<k;i++){
            pq.push({(a[i]+l[i]),i});
            mp[i]++;
        }
        for(int i=k;i<n;i++){
            while(pq.top().first<=(a[i]) &&!pq.empty()){
                s.insert(pq.top().second);
                pq.pop();
            }
            if(s.empty()){
                continue;
            }
            int lb=i%k;
            // cout<<lb<< " ";
            auto it=lower_bound(s.begin(),s.end(),lb);
            int val=*it;
            if(it==s.end()){
                val=*s.begin();
            }
            cout<<val;
            mp[val]++;
            pq.push({a[i]+l[i],val});
            s.erase(val);
        }
        int maxi=0;
        for(auto it:mp){
            maxi=max(maxi,it.second);
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        for(auto it:mp){
            if(it.second==maxi){
                res.push_back(it.first);
            }
        }
        }
        else{
            for(int i=0;i<n;i++){
                res.push_back(i);
            }
        }
        return res;
    }
};