class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        // vector<int>res;
        // for(int i=0;i<bank.size();i++){
        //     int tmp=0;
        //     for(int j=0;j<bank[i].size();j++){
        //         if(bank[i][j]=='1'){
        //             tmp=i+1;
        //             for(int k=tmp;k<bank.size();k++){
        //             int c=0;
        //                 for(int z=0;z<bank[k].size();z++){
        //                     if(bank[i][j]=='1'){
        //                         c++;
        //                     }
        //                 }
        //                 res.push_back(c);
        //             }
        //         }
        //     }
        // }
        // int s=0;
        // for(auto it:res){
        //     s+=it;
        // }
        // return s;
        vector<int>res;
        for(int i=0;i<bank.size();i++){
            int c=0,cz=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    c++;
                }
                else{
                    cz++;
                }
            }
            if(cz<bank[i].size()){
                res.push_back(c);
            }
        }
        int s=0;
        for(int i=0;i<res.size()-1;i++){
            s+=res[i]*res[i+1];
            cout<<res[i]<<" ";
        }
        return s;
    }
};