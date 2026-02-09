class Solution {
public:
    void fun(vector<bool>&used,vector<int>&digits,set<int>&st,int len,int num){
        if(len==3){
            if(num>=100 && num%2==0){
                st.insert(num);
            }
            return;
        }
        for(int i=0;i<digits.size();i++){
            if(!used[i]){
                 used[i]=true;
               fun(used,digits,st,len+1,num*10+digits[i]);
                used[i]=false;
            }
           
        }
    }
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int>st;
        int len=0,num=0;
        vector<bool>used(digits.size(),false);
        fun(used,digits,st,len,num);
        vector<int>res;
        for(auto it:st){
            res.push_back(it);
        }
        return res;
    }
};