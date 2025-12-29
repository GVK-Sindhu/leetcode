class Solution {
public:
    #define ll long long
    bool isvowel(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    long long beautifulSubstrings(string s, int k) {
        unordered_map<ll,unordered_map<ll,ll>>mp;
        ll vc=0,cc=0,res=0;
        // mp[0]->key->vc-cc value->map(vc,count)
        mp[0][0]=1;
        for(char c:s){
            if(isvowel(c)){
                vc++;
            }
            else{
                cc++;
            }
            ll psum=(vc-cc);
            for(auto &[pastvc,count]:mp[psum]){
                // cur string vc= totalvc - past vc 
                // ey vc=1 which can be derived from vc(baey)-vc(ba)=2-1=1
                if(((vc-pastvc)*(vc-pastvc))%k==0){
                    res+=count;
                }
            }
            mp[psum][vc]++;
        }
        return res;
    }
};