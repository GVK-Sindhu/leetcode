class Solution {
public:
    int squaresum(int n){
        int s=0;
        while(n){
            int d=n%10;
            s+=(d*d);
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(n!=1){
            if(seen.count(n)) return false;
            seen.insert(n);
            n=squaresum(n);
        }
        return true;
    }
};