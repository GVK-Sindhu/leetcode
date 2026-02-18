class Solution {
public:
    bool hasAlternatingBits(int n) {
        int tmp=n;
        vector<int>bin;
        while(tmp>1){
            bin.push_back(tmp%2);
            tmp=tmp/2;
        }
        if(tmp){
            bin.push_back(tmp);
        }
        for(int i=0;i<bin.size()-1;i++){
            if(bin[i]==bin[i+1]){
                return false;
            }
        }
        return true;
    }
};