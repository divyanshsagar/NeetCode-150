Minimum Window Substring: https://leetcode.com/problems/minimum-window-substring/description/

class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) {
            return "";
        }
        int i = 0;
        int j = 0;
        int curr_i = 0;
        int requiredcount = t.size();
        int mini = INT_MAX;
        unordered_map<char, int> mp;
        for (auto it : t) {
            mp[it]++;
        }
        while (j < s.size()) {
            if (mp[s[j]] > 0) {
                requiredcount--;
            }
            mp[s[j]]--;
            while (requiredcount == 0) {
                int lengthstring = j - i + 1;
                if (lengthstring < mini) {
                    mini = lengthstring;
                    curr_i = i;
                }
                mp[s[i]]++;
                if (mp[s[i]] > 0) {
                    requiredcount++;
                }
                i++;
            }
            j++;
        }
        if (mini == INT_MAX) {
            return "";
        }
        return s.substr(curr_i, mini);
    }
};
