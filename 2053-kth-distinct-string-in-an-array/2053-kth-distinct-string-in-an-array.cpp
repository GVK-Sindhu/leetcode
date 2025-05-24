class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>freq;
        for(string word:arr){
            freq[word]++;
        }
        int c=0;
        for(string word:arr){//to check in order 
            if(freq[word]==1){
                c++;
                if(c==k){
                    return word;
                }
            }
        }
        return "";
    }
};