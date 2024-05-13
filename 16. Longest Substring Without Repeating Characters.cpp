Longest Substring Without Repeating Characters: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int i = 0;
        int j = 0;
        int ans = 0;
        while (j < s.size()) {
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                ans = max(ans, j - i + 1);
                j++;
            } else {
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
