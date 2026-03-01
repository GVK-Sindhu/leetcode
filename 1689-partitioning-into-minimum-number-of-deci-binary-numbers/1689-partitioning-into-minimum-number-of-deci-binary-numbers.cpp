class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(char c:n){
            maxi=max(maxi,c-'0');
        }
        return maxi;
    }
};

// 3 -> 1+1+1 9-> all 9 ones

// 1
// 10
// 11
// 100
// 101
// 110
// 111
