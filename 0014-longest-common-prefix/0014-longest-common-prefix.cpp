class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if(strs.size()==1){
            return strs[0];
        }
        int length=strs[0].size();
        string tmp1=strs[0];
        string tmp2=strs[strs.size()-1];
        int len=-1;
        for(int i=0;i<length;i++){
            if(tmp1[i]==tmp2[i]){
                len++;
            }
            else{
                break;
            }
        }
        if(len==-1){
            return "";
        }
        return tmp1.substr(0,len+1);
    }
};