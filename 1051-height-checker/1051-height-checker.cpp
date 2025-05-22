class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>tmp;
        for(int it:heights){
            tmp.push_back(it);
        }
        int c=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(tmp[i]!=heights[i]){
                c++;
            }
        }
        return c;
    }
};