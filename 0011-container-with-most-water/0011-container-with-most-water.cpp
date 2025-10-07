class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxarea=0;
        while(l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            int area=w*h;
            maxarea=max(area,maxarea);
            if(height[l]<=height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxarea;
    }
};