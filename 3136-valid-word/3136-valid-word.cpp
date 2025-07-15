class Solution {
public:
    bool isValid(string word) {
        int vow=0,con=0;
        if(word.length()>=3){
        for(char c:word){
            if(!isalnum(c)){
                return false;
            }
            if(isalnum(c)){
                if(isalpha(c)){
                if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
                    vow++;
                }
                else{
                    con++;
                }
                }
            }
        }
        if(vow>0 && con>0){
           
            return true;
        }
        }
        cout<<vow<<" "<<con<<endl;

        return false;
    }
};