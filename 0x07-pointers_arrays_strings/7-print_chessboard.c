#include "main.h"
/**
 * _chessboard - prints chessboard
 * @a:array
 * Return:0
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int r;

	for (x = 0; x < 8; x++)
	{
		for (r = 0; r < 8; r++)
			_putchar(a[x][r]);
		_putchar('\n');
	}
}
