#include <iostream>
#include<fstream>
using namespace std;

char board[3][3];
char currentPlayer = 'X';

// Initialize the game board with numbers 1 to 9
void initializeBoard() {
    char num = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = num++;
        }
    }
}
void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---+---+---\n";
    }
    cout << "\n";
}
 ofstream file1("ticfile");
bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentPlayer &&
             board[i][1] == currentPlayer &&
             board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer &&
             board[1][i] == currentPlayer &&
             board[2][i] == currentPlayer)) {
            return true;
        }
    }
    if ((board[0][0] == currentPlayer &&
        board[1][1] == currentPlayer &&
        board[2][2] == currentPlayer) ||
       (board[0][2] == currentPlayer &&
        board[1][1] == currentPlayer &&
        board[2][0] == currentPlayer)) {
       return true;
   }
   return false;
}
bool checkDraw() {
    for (int i = 0; i < 3; i++) {9
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}
bool makeMove(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    if (position < 1 || position > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        return false;
    }
    board[row][col] = currentPlayer;
    return true;
}

int main()
{
    initializeBoard();
    displayBoard() ;
    while (true) {
        int position;
        cout << "parva " << currentPlayer << ", enter your move (1-9): " << endl;
        cin >> position;
        file1 << "parva " << currentPlayer << ", enter your move (1-9): " << endl;
        file1 << "position of the player is=" << position << endl;

        if (!makeMove(position)) {
            cout << "Invalid move. Try again.\n" << endl;
            file1 << "Invalid move. Try again.\n" << endl;
            continue;
        }

        displayBoard();

        if (checkWin()) {
            cout << "parva " << currentPlayer << " wins!\n" << endl;
            file1 << "parva " << currentPlayer << " wins!\n" << endl;
            break;
        }

        if (checkDraw()) {
            cout << "It's a draw!\n" << endl;
            file1 << "It's a draw!\n" << endl;
            break;
        }

        switchPlayer();
    }

    return 0;

}
