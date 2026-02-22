class Solution {
public:
    int binaryGap(int n) {
        int tmp=n;
        vector<int>temp;
        int oc=0;
        while(tmp>1){
            temp.push_back(tmp%2);
            if(tmp%2==1){
                oc++;
            }
            tmp/=2;
        }
        if(tmp==1) oc++;
        temp.push_back(tmp);
        if(oc<=1) return 0;
        int maxlen=0,len=0;
        bool found=false;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==1){
                if(found){
                    maxlen=max(maxlen,len);
                }
                found=true;
                len=1;
            }
            else if(found){
                len++;
            }
        }
        return maxlen;
    }
};