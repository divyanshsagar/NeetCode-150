Spiral Matrix: https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;
        int count = 0;
        vector<int> ans;
        while (left <= right && top <= bottom) {
            if (count == 0) {
                for (int i = left; i <= right; i++) {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if (count == 1) {
                for (int i = top; i <= bottom; i++) {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            if (count == 2) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (count == 3) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            count++;
            if (count == 4) {
                count = 0;
            }
        }
        return ans;
    }
};
