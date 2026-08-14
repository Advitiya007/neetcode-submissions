class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
       bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;

                int val = board[r][c] - '1'; // Map '1'-'9' to index 0-8
                int boxIdx = (r / 3) * 3 + (c / 3);

                // Check for duplicates in constant O(1) time
                if (rows[r][val] || cols[c][val] || boxes[boxIdx][val]) {
                    return false;
                }

                // Mark digit as seen
                rows[r][val] = true;
                cols[c][val] = true;
                boxes[boxIdx][val] = true;
            }
        }

        return true;
    }
};
