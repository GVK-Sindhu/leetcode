class Solution {
public:
    int bestClosingTime(string c) {
        int n = c.size();

        int totalY = 0;
        for (char ch : c)
            if (ch == 'Y') totalY++;

        int nc = 0;         
        int yc = 0;          
        int minPenalty = totalY;
        int bestHour = 0;

        for (int i = 0; i < n; i++) {
            if (c[i] == 'Y') yc++;
            else nc++;

            int remY = totalY - yc;   
            int penalty = nc + remY;

            if (penalty < minPenalty) {
                minPenalty = penalty;
                bestHour = i + 1;   
            }
        }

        return bestHour;
    }
};
