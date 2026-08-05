class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i=0; i<9; ++i) {
            vector<int> count(9, 0);

            for (int j=0; j<9; ++j) {
                int r = 3 * (i / 3) + j / 3;
                int c = 3 * (i % 3) + j % 3;
                if (board[r][c] != '.' ) {

                    count[board[r][c]-'1'] += 1;

                    if (count[board[r][c]-'1'] > 1) {
                    return false;
                    }

                }
            }

        }

        for (int i=0; i<9; ++i) {
                vector<int> rowCount(9, 0);
                vector<int> colCount(9, 0);

                for (int j=0; j<9; ++j) {

                    if (board[i][j] != '.' ) {

                        rowCount[board[i][j]-'1'] += 1;

                        if (rowCount[board[i][j]-'1'] > 1) {
                                return false;
                        }

                    }

                    if (board[j][i] != '.' ) {

                        colCount[board[j][i]-'1'] += 1;

                        if (colCount[board[j][i]-'1'] > 1) {
                                return false;
                        }

                    }

                }

        }

        return true;

    }
};