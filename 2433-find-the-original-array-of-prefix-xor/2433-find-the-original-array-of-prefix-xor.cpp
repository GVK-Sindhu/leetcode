class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>res(pref.size());
        res[0]=pref[0];
        if(pref.size()>1){
            for(int i=1;i<pref.size();i++){
               res[i]=(pref[i-1]^pref[i]);
            }
        }
        return res;
    }
};