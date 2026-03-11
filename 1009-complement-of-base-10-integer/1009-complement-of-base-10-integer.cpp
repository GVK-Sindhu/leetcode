class Solution {
public:
    int bitwiseComplement(int n) {
        int temp=n;
        if(n==0) return 1;
        vector<int>res;
        while(temp>0){
            res.push_back(temp%2);
            temp/=2;
        }
        if(temp) res.push_back(temp%2);
        reverse(res.begin(),res.end());
        // for(int i=0;i<res.size();i++){
        //     if(res[i]==0){
        //         res.erase(res.begin()+i);
        //         i--;
        //     }
        //     else{
        //         break;
        //     }
        // }
        for(int i=0;i<res.size();i++){
            if(res[i]==0){
                res[i]=1;
            }
            else{
                res[i]=0;
            }
        }

        int ans=0;
        for(int i=0;i<res.size();i++){
            if(res[i]==1){
                ans+=pow(2,res.size()-i-1);
            }
            
        }
        return ans;
    }
};