class Solution {
public:
    string strWithout3a3b(int a, int b) {
      string res = "";
    while (a > 0 || b > 0) {
        bool writeA = false;

        int len = res.size();
        if (len >= 2 && res[len - 1] == res[len - 2]) {
            if (res[len - 1] == 'a') writeA = false;
            else writeA = true;
        } else {
            if (a >= b) writeA = true;
            else writeA = false;
        }

        if (writeA) {
            res += 'a';
            a--;
        } else {
            res += 'b';
            b--;
        }
    }
    return res;
    }
};