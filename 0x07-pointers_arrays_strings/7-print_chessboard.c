#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 * @a: array
 */
void print_chessboard(char (*a)[8])
{
	int i, i2;

	for (i = 0; i < 8; i++)
	{
		for (i2 = 0; i2 < 8; i2++)
			_putchar(a[i][i2]);
		_putchar('\n');
	}
}
