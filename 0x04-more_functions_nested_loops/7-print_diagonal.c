#include "holberton.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: num
* Return: 1 or 0
*/
void print_diagonal(int n)
{
	int i;
	int f;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (f = 0; f < i; f++)
				_putchar(' ');
			_putchar('\\');
			if (i != n - 1)
				_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
