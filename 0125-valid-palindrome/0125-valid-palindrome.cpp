#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        // string news="";
        // for(char i:s){
        //     if(isalnum(i)) {
        //         news+=tolower(i);
        //     }
        // }
        transform(s.begin(),s.end(),s.begin(),::tolower);
        s.erase(remove_if(s.begin(),s.end(),[](char c){return !isalnum(c);}),s.end());

        return palindromehelper(s,0);
    }
    bool palindromehelper(string s,int i){
        int n=s.size();
        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]){
            return false;
        }
        return palindromehelper(s,i+1);
    }
};