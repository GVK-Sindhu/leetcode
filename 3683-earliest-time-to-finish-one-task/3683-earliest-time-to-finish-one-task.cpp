class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int>res;
        int tmp;
        for(int i=0;i<tasks.size();i++){
            tmp=tasks[i][0]+tasks[i][1];
            cout<<tmp<<" ";
            res.push_back(tmp);
        }
        
        int min=INT_MAX;
        for(int it:res){
            if(it<min){
                min=it;
            }
        }
        return min;
    }
};