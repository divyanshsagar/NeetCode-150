3Sum: https://leetcode.com/problems/3sum/description/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == target) {
                    st.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                if (nums[i] + nums[j] + nums[k] < target) {
                    j++;
                }
                if (nums[i] + nums[j] + nums[k] > target) {
                    k--;
                }
            }
        }
        for (auto it : st) {
            ans.push_back(it);
        }
        return ans;
    }
};
