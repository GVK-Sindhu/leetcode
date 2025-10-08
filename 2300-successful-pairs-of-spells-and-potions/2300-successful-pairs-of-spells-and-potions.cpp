class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>res;
        int m=potions.size();
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int c=0;
            int spellstrength=spells[i];
            int l=0,r=m-1;
            int idx = m;
            while(l<=r){
                int mid=(l+r)/2;
                if(potions[mid]*spellstrength>=success){
                    idx = min(idx, mid);
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            res.push_back(m-idx);
        }
        return res;
    }
};