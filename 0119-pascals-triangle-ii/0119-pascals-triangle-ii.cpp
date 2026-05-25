class Solution {
public:
    vector<int> getRow(int rowidx) {
        //inplace dp space optimization
        vector<int>res(rowidx+1,1);
        for(int i=1;i<rowidx;i++){
            for(int j=i;j>=1;j--){
                res[j]=res[j]+res[j-1];
            }
        }
        return res;
    }
};

//space optimized dp using prev,curr arrays
// vector<int> prev = {1};
//  for(int i = 1; i <= rowIndex; i++) {
//      vector<int> curr(i + 1, 1);
//     for(int j = 1; j < i; j++) {
//         curr[j] = prev[j] + prev[j - 1];
//      }
//      prev = curr;
// }
// return prev;

// O(n) math
// Row 4:

// 4C0 4C1 4C2 4C3 4C4
// =
// 1 4 6 4 1

//  vector<int> res;
// long long val = 1;
//  for(int i = 0; i <= rowIndex; i++) {
//     res.push_back(val);
//      val = val * (rowIndex - i) / (i + 1);
// }