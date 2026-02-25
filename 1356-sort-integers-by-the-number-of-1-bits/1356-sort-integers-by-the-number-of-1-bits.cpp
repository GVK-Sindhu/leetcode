class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),[](int a,int b){
            int bita=__builtin_popcount(a);
            int bitb=__builtin_popcount(b);
            if(bita==bitb){
                return a<b;
            }
            return bita<bitb;
        });
        return arr;
    }
};

// int countBits(int n){
//     int count = 0;
//     while(n){
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }