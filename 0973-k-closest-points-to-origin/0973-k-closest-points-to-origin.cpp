class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,vector<int>>>tmp;
        for(auto it:points){
            int dist=it[0]*it[0] +it[1]*it[1];
            tmp.push_back({dist,it});
        }
        sort(tmp.begin(),tmp.end());
        vector<vector<int>>res;
        for(int i=0;i<k;i++){
            res.push_back(tmp[i].second);
        }
        return res;
    }
};