class Solution {
public:
    bool doesAliceWin(string s) {
        int co=0;
        for(char c:s){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                co++;
            }
        }
        cout<<co<<"\n";
        if(co==0){
            return false;
        }
        // else if(co==1){
        //     return true;
        // }
        // else if(co%2==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return true;
    }
};