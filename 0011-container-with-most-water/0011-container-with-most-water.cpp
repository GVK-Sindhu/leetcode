class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int maxhl=0,maxhr=0;
        int maxarea=0;
        while(l<r){
            int heights=min(height[l],height[r]);
            int width=(r-l);
            int area=heights*width;
            maxarea=max(maxarea,area);
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