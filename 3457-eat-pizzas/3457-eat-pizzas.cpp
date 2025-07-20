class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end());
        long long total=0;
        int n=pizzas.size();
        int i=n-1;
        int grp=n/4;
        for(int day=1;day<=grp;day++){
            if(day%2==1){
                total+=pizzas[i];
            }
            i-=2;
            else{
                total+=pizzas[i];
            }
            i-=2;
        }
        // for(int day=1;day<=grp;day+=2){
        //         total+=pizzas[i--];
        // }
        // i--;
        // for(int day=2;day<=grp;day+=2){
        //         total+=pizzas[i];
        //     i-=2;
        // }   
        return total;                                                                   

    }
};