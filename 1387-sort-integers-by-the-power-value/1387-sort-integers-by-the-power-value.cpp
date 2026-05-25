class Solution {
public:
    int ispow(int x){
        int tmp=x;
        int st=0;
        if(x==1) return 0;
        while(tmp>1){
            if(tmp%2==1){
                tmp=3*tmp+1;
            }
            else{
                tmp=tmp/2;
            }
            st++;
        }
        return st;
    }
    int getKth(int lo, int hi, int k) {
        if((lo-hi)==0 && k==1){
            return lo;
        }
        vector<pair<int,int>>tmp;
        for(int i=lo;i<=hi;i++){
           tmp.push_back({i,ispow(i)});
        }
        sort(tmp.begin(),tmp.end(),[](pair<int,int>a,pair<int,int>b){
            if(a.second==b.second){
                return a.first<b.first;
            }
            return a.second<b.second;
        });
        int len=0;
        for(auto it:tmp){
            len++;
            if(len==k){
                return it.first;
            }
        }
        return -1;
    }
};