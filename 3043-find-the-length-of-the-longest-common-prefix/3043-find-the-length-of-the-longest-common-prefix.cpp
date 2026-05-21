class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int l1=arr1.size();
        int l2=arr2.size();
        int maxpref=0;
        set<string>s1;
        for(int i=0;i<l1;i++){
            string tmp=to_string(arr1[i]);
            string res="";
            for(int i=0;i<tmp.size();i++){
                res+=tmp[i];
                s1.insert(res);
            }
        }
        for(int i=0;i<l2;i++){
            string tmp=to_string(arr2[i]);
            string res="";
            for(int i=0;i<tmp.size();i++){
                res+=tmp[i];
                if(s1.count(res)){
                    maxpref=max(maxpref,(int)res.size());
                }
            }
        }
        return maxpref;
    }
};