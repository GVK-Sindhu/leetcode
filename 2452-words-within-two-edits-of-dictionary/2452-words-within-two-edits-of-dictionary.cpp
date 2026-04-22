class Solution {
public:
    vector<string> twoEditWords(vector<string>& arr1, vector<string>& arr2) {
        vector<string>ans;
        for(int i=0;i<arr1.size();i++){
            //words
            for(int k=0;k<arr2.size();k++){
                //letter
                int cnt=0;
                for(int j=0;j<arr1[i].size();j++){
                    if(arr1[i][j]!=arr2[k][j]){
                        cnt++;
                    }
                    if(cnt>3) break;
                }
                if(cnt<=2){
                    ans.push_back(arr1[i]);
                    break;
                }
            }
        }
        return ans;
    }
};