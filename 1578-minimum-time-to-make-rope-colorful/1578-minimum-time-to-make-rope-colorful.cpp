class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
         int n = colors.size();
        int res = 0;

        int i = 0;
        while (i < n) {
            int sum = neededTime[i];
            int mx = neededTime[i];

            int j = i + 1;

            while (j < n && colors[j] == colors[i]) {
                sum += neededTime[j];
                mx = max(mx, neededTime[j]);
                j++;
            }

            res += (sum - mx);
            i = j;
        }

        return res;
    }
};

