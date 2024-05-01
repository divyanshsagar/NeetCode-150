Valid Palindrome: https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    string valid(string s) {
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if ('a' <= s[i] && 'z' >= s[i] || 'A' <= s[i] && 'Z' >= s[i] ||
                '0' <= s[i] && '9' >= s[i]) {
                result += s[i];
            }
        }
        return result;
    }
    string convert(string temp) {
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] >= 'A' && temp[i] <= 'Z') {
                temp[i] = temp[i] - 'A' + 'a';
            }
        }
        return temp;
    }

    bool isPalindrome(string s) {
        string temp = valid(s);
        string temp1 = convert(temp);
        int i = 0;
        int j = temp1.size() - 1;
        while (i < j) {
            if (temp1[i] != temp1[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }
};
