/*
roll no.-33
student name-shaqib qureshi
program title- 3x3 game board 


task given by:
roll no. of assignee:26
assignee name- hussain sitamouwala


*/


#include <stdio.h>

char board[3][3];  // 3x3 game board
char currentPlayer;  // 'X' or 'O'

// Function to initialize the board with empty spaces
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to display the board
void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---+---+---\n");
    }
    printf("\n");
}

// Function to check if a player has won
int checkWin() {
    for (int i = 0; i < 3; i++) {
        // Check rows and columns
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return 1;
    }
    return 0;
}

// Function to check if the board is full (draw)
int isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

// Main function to run the game
int main() {
    int row, col;
    currentPlayer = 'X';  // X starts the game
    initializeBoard();

    while (1) {
        displayBoard();
        printf("Player %c, enter your move (row and column: 1-3): ", currentPlayer);
        scanf("%d %d", &row, &col);
        row--; col--;  // Convert to 0-based indexing

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            if (checkWin()) {
                displayBoard();
                printf("Player %c wins!\n", currentPlayer);
                break;
            }
            if (isDraw()) {
                displayBoard();
                printf("It's a draw!\n");
                break;
            }
            // Switch player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    return 0;
}

