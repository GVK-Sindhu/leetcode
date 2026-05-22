class Solution {
public:
    static bool comparator(pair<int,char> a, pair<int,char> b){
        return a.first > b.first;
    }
    string frequencySort(string s) {

         pair<int,char> freq[256];
        for(int i=0;i<256;i++){
            freq[i]={0,char(i)};
        }
        for(char ch:s){
             freq[(unsigned char)ch].first++;
        }
        sort(freq,freq+256,comparator);

        string ans="";
        for(int i=0;i<256;i++){

            if(freq[i].first>0){

                ans += string(freq[i].first, freq[i].second);
            }
        }
        return ans;
    }
};

