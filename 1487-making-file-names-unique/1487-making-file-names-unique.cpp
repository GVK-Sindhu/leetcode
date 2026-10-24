class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        vector<string>res;
        unordered_map<string,int>mp;
        for(auto it:names){
            if(mp[it]==0){
                res.push_back(it);
                mp[it]=1;
            }
            else{
                int k=mp[it];
                string name=it+"("+to_string(k)+")";
                while(mp[name]>0){
                    k++;
                    name=it+"("+to_string(k)+")";
                }
                res.push_back(name);
                mp[it]=k+1;
                mp[name]=1;
            }
        }
        return res;
    }
};