#include "chessviz/board_read.h"
#include "libchessviz/board.h"
#include "libchessviz/board_print_plain.h"
#include "libchessviz/move.h"
#include <stdio.h>

int main()
{
    char board[9][9];
    char moveChess[11];
    int check = 0;

    fillBoard(board);
    printBoard(board);

    cout << "Move example: e2-e4" << endl << "Type 0 to exit program";

    while (1) {
        cout << endl << "Type a move: ";
        readBoard(moveChess);

        check = move(board, moveChess);

        if (check == 1) {
            printf("\nInput data fail\n");
            break;
        }

        if (check == 2) {
            cout << "\n\n" << "Exiting program" << endl;
            break;
        }

        printBoard(board);
    }
}
