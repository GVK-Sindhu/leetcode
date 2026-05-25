class Solution {
public:
    int maxRepeating(string sequence, string word) {
        string tmp="";
        int c=0;
        while(true){
            tmp+=word;
            if(sequence.find(tmp)!=string::npos){
                c++;
            }
            else{
                break;
            }
        }
        return c;
    }
};