Valid Anagram: https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for (auto it : s) {
            mp[it]++;
        }
        for (int i = 0; i < t.size(); i++) {
            if (mp.find(t[i]) != mp.end()) {
                mp[t[i]]--;
                continue;
            }
            return false;
        }
        for (auto it : mp) {
            if (it.second != 0) {
                return false;
                ;
            }
        }
        return true;
    }
};
