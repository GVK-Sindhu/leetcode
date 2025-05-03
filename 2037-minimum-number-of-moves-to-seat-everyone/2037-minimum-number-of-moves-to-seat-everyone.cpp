class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=seats.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        vector<int>res(n);
        for(int i=0;i<n;i++){
            res[i]=abs(students[i]-seats[i]);
        }
        int c=0;
        for(auto it:res){
            c=c+it;
        }
        return c;
    }
};