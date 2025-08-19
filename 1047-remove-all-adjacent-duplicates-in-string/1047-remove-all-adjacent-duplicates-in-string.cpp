class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>c;
        for(char ch:s){
            if(!c.empty() && ch==c.top()){
                c.pop();
            }
            else{
                c.push(ch);
            }
        }
        string res;
        while(!c.empty()){
            res.push_back(c.top());
            c.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};