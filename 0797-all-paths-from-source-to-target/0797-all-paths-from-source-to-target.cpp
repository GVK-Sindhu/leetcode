class Solution {
public:
    void solve(vector<vector<int>> graph,vector<vector<int>>&ans,vector<int>&ds,int n,int node){
        if(node==n-1){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<graph[node].size();i++){
            ds.push_back(graph[node][i]);
            solve(graph,ans,ds,n,graph[node][i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        int n=graph.size();
        vector<int>ds;
        ds.push_back(0);
        solve(graph,ans,ds,n,0);
        return ans;
    }
};
