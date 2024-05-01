Container With Most Water: https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int area = 0;
        while (i < j) {
            int h = min(height[i], height[j]);
            int w = j - i;
            area = max(area, h * w);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return area;
    }
};
