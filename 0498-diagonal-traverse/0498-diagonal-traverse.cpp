class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                mp[i+j].push_back({mat[i][j]});

            }
        }
        bool flag=true;
        vector<int>res;
        for(auto it:mp){
            if(flag){
                reverse(it.second.begin(),it.second.end());
                cout<<it.first<< " ";
                for(auto it:it.second){

                res.push_back(it);
                }
            }
            else{
                for(auto it:it.second){
                res.push_back(it);
                }
            }
            flag=!flag;
        }
        return res;
    }
};