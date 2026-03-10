class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int res=0;
        while(l<r){
            int h=min(height[l],height[r]);
            int w=(r-l);
            res=max(res,(w*h));
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};