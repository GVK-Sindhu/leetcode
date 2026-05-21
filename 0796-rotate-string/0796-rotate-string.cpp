class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            string tmp=s.substr(i)+s.substr(0,i);
            if(tmp==goal){
                return true;
            }
        }
        return false;
        // string tmp=s+s;
        // return tmp.substr(goal.begin(),goal.end());
    }
};