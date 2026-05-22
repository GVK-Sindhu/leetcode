class Solution {
public:
    int fun(string tmp){
        vector<int>freq(26,0);
        for(int i=0;i<tmp.size();i++){
            freq[tmp[i]-'a']++;
        }
        int maxf=0,minf=INT_MAX;
        for(int it:freq){
            if(it>0){
                maxf=max(maxf,it);
                minf=min(minf,it);
            }
        }
        return maxf-minf;
    }
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            //   string tmp="";
            unordered_map<char,int>freq;
            for(int j=i;j<s.size();j++){
                // tmp+=s[j];
                // sum+=fun(tmp);
                freq[s[j]]++;
                int minf=INT_MAX,maxf=0;
                for(auto it:freq){
                    minf=min(minf,it.second);
                    maxf=max(maxf,it.second);
                }
                sum+=(maxf-minf);
            }
        }
        return sum;
    }
};