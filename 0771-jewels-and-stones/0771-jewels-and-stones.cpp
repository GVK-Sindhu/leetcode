class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jewelset(jewels.begin(),jewels.end());
        int c=0;
        for(char it:stones){
            if(jewelset.count(it)){
                c++;
            }
        }
        return c;
    }
};