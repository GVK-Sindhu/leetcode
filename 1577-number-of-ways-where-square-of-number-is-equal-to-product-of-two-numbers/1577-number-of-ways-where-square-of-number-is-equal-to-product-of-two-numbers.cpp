class Solution {
public:
    int numTriplets(vector<int>& n1, vector<int>& n2) {
        unordered_map<long long,int>freq1;
        unordered_map<long long,int>freq2;
        for(int i=0;i<n1.size();i++){
           freq1[1LL*n1[i]*n1[i]]++;
        }
        for(int j=0;j<n2.size();j++){
            freq2[1LL*n2[j]*n2[j]]++;
        }
        int c=0;
        for(int i=0;i<n2.size();i++){
            for(int j=i+1;j<n2.size();j++){
                long long tmp=1LL*n2[i]*n2[j];
                if(freq1.count(tmp)){
                    c+=freq1[tmp];
                }
            }
        }
        for(int i=0;i<n1.size();i++){
            for(int j=i+1;j<n1.size();j++){
                long long tmp=1LL*n1[i]*n1[j];
                if(freq2.count(tmp)){
                    c+=freq2[tmp];
                }
            }
        }
        return c;
    }
};