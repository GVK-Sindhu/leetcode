class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        vector<pair<char,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),[](const auto& a,const auto& b){   
              return a.second>b.second;
         });
        string res;
        for(auto it:v){
           res+=string(it.second,it.first);
        }
        return res;

        
    }
};