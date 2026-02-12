class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size(),maxlen=0;
        for(int i=0;i<n;i++){
            vector<int>freq(27,0);
            for(int j=i;j<n;j++){
                bool flag=false;
                freq[s[j]-'a']++;
                bool found=false;
                int res;
                for(int k=0;k<freq.size()-1;k++){
                    if(!found && freq[k]>0){
                        res=freq[k];
                        found=true;
                    }
                    else if(found && freq[k]>0){
                        if(res!=freq[k]){
                            flag=true;
                            break;
                        }
                    }
                }
                 if(!flag) maxlen=max(maxlen,j-i+1);
            }
           
        }
        return maxlen;
    }
};