class Solution {
public:
    int maxArea(vector<int>& height) {
       int start = 0; 
        int end = height.size() - 1;
        int maxArea = 0;
        while(end >= start){
            maxArea = max(maxArea, min(height[end], height[start])*(end - start));
            if(height[end] > height[start])
                start++;
            else
                end--;
        }
        return maxArea;
    }
};