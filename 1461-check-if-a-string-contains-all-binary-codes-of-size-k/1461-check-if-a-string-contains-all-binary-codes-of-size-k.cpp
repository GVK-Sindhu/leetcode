class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int>freq;
        int val=pow(2,k);
        for(int i=0;i<=(int)s.size()-k;i++){
            string tmp=s.substr(i,k);
            freq[tmp]++;
        }
        return freq.size()==val;
    }
};