class Solution {
public:
    int countKthRoots(int l, int r, int k) {
    //     int c=0;
    //   for(int i=0;i<=r;i++){
    //       if(pow(i,k)>=l && pow(i,k)<=r){
    //           c++;
    //       }
    //   }  
    //     return c;
        int low=ceil(pow(l,1.0/k));
        int h=floor(pow(r,1.0/k));
        while(pow(low,k)<l) low++;
        while(low>0 && pow(low-1,k)>=l) low--;

        while(pow(h,k)>r) h--;
        while(pow(h+1,k)<=r) h++;
        if(low>h) return 0;
        return h-low+1;
        
    }
};