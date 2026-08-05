class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i=0; i<9; ++i) {
            vector<int> count(9, 0);

            for (int j=0; j<9; ++j) {

                if (board[3*(i/3) + j/3][3*(i%3) + j%3] != '.' ) {

                    count[board[3*(i/3) + j/3][3*(i%3) + j%3]-'1'] += 1;

                    if (count[board[3*(i/3) + j/3][3*(i%3) + j%3]-'1'] > 1) {
                    return false;
                    }

                }
            }

        }

        for (int i=0; i<9; ++i) {
                vector<int> count(9, 0);

                for (int j=0; j<9; ++j) {

                    if (board[i][j] != '.' ) {

                        count[board[i][j]-'1'] += 1;

                        switch (count[board[i][j]-'1']) {
                            case 2:
                            case 6:
                            case 8:
                            case 9:
                                return false;
                        }

                    }

                    if (board[j][i] != '.' ) {

                        count[board[j][i]-'1'] += 4;

                        switch (count[board[j][i]-'1']) {
                            case 2:
                            case 6:
                            case 8:
                            case 9:
                                return false;
                        }

                    }

                }

        }

        return true;

    }
};
