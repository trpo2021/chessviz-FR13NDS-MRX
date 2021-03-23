#include <libchessbiz/board_print_plain.h>
#include <stdio.h>

int printBoard(char board[][9])
{
	cout << endl;
	
	for (int i = 9; i > -1; i--)
	{
		for (int j = 0; j < 9; j++)
		{
			if (board[i][j] == 0)
			{
				desk[i][j] = 32;
			}
			
			cout << board[i][j];
			cout.width(4);
		}
		
		cout << endl;
	}
	
	cout << "\n-" << board[0][0] << "-\n";
}