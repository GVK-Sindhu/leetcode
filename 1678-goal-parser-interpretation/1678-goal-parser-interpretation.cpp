class Solution {
public:
    string interpret(string command) {
        string res="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G'){
                res+='G';
            }
            else if(command[i]=='(' && command[i+1]==')'){
                res+='o';
            }
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')'){
                res+='a';
                res+='l';
            }
        }
        return res;
    }
};