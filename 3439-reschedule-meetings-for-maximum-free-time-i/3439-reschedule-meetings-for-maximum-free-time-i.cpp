class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n=startTime.size();
        vector<int>gaps;
        for(int i=1;i<n;++i){
            int gap=startTime[i]-endTime[i-1];
            gaps.push_back(gap);
        }
         gaps.insert(gaps.begin(), startTime[0] - 0);          // gap before first meeting
         gaps.push_back(eventTime - endTime[n - 1]);           // gap after last meeting

        int windowsize=k+1;
        // if(windowsize>gaps.size()) return 0;
        int windowsum=0;
        int maxfree=0;
        int actualWindowSize = min((int)gaps.size(), k + 1); 
        for(int i=0;i<gaps.size();++i){
            windowsum+=gaps[i]; 
        if (i >= actualWindowSize) {
            windowsum -= gaps[i - actualWindowSize];
        }
        maxfree = max(maxfree, windowsum);
        }
        // int maxfree=windowsum;
        // for(int i=windowsize;i<gaps.size();i++){
        //     windowsum+=gaps[i]-gaps[i-windowsize];
        //     maxfree=max(maxfree,windowsum);
        // }
        return maxfree;
    }
};