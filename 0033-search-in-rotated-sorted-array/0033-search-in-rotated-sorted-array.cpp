class Solution {
public:
    int search(vector<int>& a, int tar) {
        int n=a.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(a[mid]==tar){
                return mid;
            }
            if(a[l]<a[mid]){ //left space
                if(tar>=a[l] && tar<a[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{ //right space
                if(tar>a[mid] && tar<=a[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};