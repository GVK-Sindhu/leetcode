class Solution {
    private:
      void dfs(int node,vector<int>&vis,vector<vector<int>>& arr){
          vis[node]=1;
          for(int j=0;j<arr.size();j++){
            if(arr[node][j]==1 && !vis[j]){
                dfs(j,vis,arr);
            }
          }
      }
public:
    int findCircleNum(vector<vector<int>>& arr) {
        int n=arr.size();
        vector<int>vis(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                    c++;
                    dfs(i,vis,arr);
            }
        }
        return c;
    }
};