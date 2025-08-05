class Solution {
public:
    int minPartitions(string n) {
        int maxdigi='0';
        for(char c:n){
            if(c>maxdigi){
                maxdigi=c;
            }
        }
        return maxdigi-'0';

    }
};