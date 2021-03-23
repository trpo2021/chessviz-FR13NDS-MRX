#include <stdio.h>

int main()
{
    int i, j;
    char board[9][9];
    board[0][0] = '8';
    board[0][1] = 'r';
    board[0][2] = 'n';
    board[0][3] = 'b';
    board[0][4] = 'q';
    board[0][5] = 'k';
    board[0][6] = 'b';
    board[0][7] = 'n';
    board[0][8] = 'r';
    board[1][0] = '7';
    
    for (i = 1; i < 9; i++)
    {
    	board[1][i] = 'p';
    }
    
    for (i = 2; i < 6; i++)
    {
    	for (j = 1; j < 9; j++)
    	{
    		board[i][j] = ' ';
    	}
    		
    }
    
    board[2][0] = '6';
    board[3][0] = '5';
    board[4][0] = '4';
    board[5][0] = '3';
    board[6][0] = '2';
    
    for (i = 1; i < 9; i++)
    {
    	board[6][i] = 'P';
    }
    
    board[7][0] = '1';
    board[8][0] = ' ';
    board[7][1] = 'R';
    board[7][2] = 'N';
    board[7][3] = 'B';
    board[7][4] = 'Q';
    board[7][5] = 'K';
    board[7][6] = 'B';
    board[7][7] = 'N';
    board[7][8] = 'R';
    board[8][1] = 'a';
    board[8][2] = 'b';
    board[8][3] = 'c';
    board[8][4] = 'd';
    board[8][5] = 'e';
    board[8][6] = 'f';
    board[8][7] = 'g';
    board[8][8] = 'h';
    
    for (i = 0; i < 9; i++)
    {
    	for (j = 0; j < 9; j++)
    	{
    		printf("%c ", board[i][j]);
    	}
    	printf("\n");
    }
}
