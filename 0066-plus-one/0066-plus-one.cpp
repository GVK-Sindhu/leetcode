class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string num;
        for(int it:digits){
            num+=(it+'0');
        }
        vector<int>res;
        if(num[0]=='0' && num.size()==1){
            res.push_back(1);
        }
        else{
            int n=stoi(num)+1;
            int tmp=n;
            while(tmp>0){
                res.push_back(tmp%10);
                tmp/=10;
            }
            reverse(res.begin(),res.end());
        }
        return res;
    }
};