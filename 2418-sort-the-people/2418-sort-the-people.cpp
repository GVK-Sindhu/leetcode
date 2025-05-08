class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>hton;
        int n=names.size();
        for(int i=0;i<n;i++){
            hton[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end(),greater<int>());
        vector<string>res(n);
        for(int i=0;i<n;i++){
            res[i]=hton[heights[i]];
        }
        return res;
    }
};