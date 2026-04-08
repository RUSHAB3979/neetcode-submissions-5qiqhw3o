class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rowSeen[9][9] = {false};
        bool colSeen[9][9] = {false};
        bool boxSeen[9][9] = {false};
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] != '.') {
                    int val = board[r][c] - '1';
                    int boxIdx = (r / 3) * 3 + (c / 3);
                    if (rowSeen[r][val] || colSeen[c][val] || boxSeen[boxIdx][val]) return false;
                    rowSeen[r][val] = true;
                    colSeen[c][val] = true;
                    boxSeen[boxIdx][val] = true;
                }
            }
        }
        return true;
    }
};