class Solution {
public:
    int maxArea(vector<int>& heights) {
          int max_water=INT_MIN;
          int n=heights.size();
          for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int height=j-i;
                int width=min(heights[i],heights[j]);
                int area=height*width;
                max_water=max(max_water,area);
            }
          }
          return max_water;
    }
};
