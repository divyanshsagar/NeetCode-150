Valid Sudoku: https://leetcode.com/problems/valid-sudoku/description/

class Solution {
public:
    // valid
    bool valid(vector<vector<char>>& board, int sr, int er, int sc, int ec) {
        unordered_set<char> st;
        for (int i = sr; i <= er; i++) {
            for (int j = sc; j <= ec; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        // row
        for (int i = 0; i < 9; i++) {
            unordered_set<char> st;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        // col
        for (int j = 0; j < 9; j++) {
            unordered_set<char> st;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') {
                    continue;
                }
                if (st.find(board[i][j]) != st.end()) {
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        // 3*3
        for (int sr = 0; sr < 9; sr += 3) {
            int er = sr + 2;
            for (int sc = 0; sc < 9; sc += 3) {
                int ec = sc + 2;
                if (!valid(board, sr, er, sc, ec)) {
                    return false;
                }
            }
        }
        return true;
    }
};
