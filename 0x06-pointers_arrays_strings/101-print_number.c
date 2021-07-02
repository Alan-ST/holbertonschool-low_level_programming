#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: num
 */
void print_number(int n)
{
	unsigned int v;

	if (n < 0)
	{
		_putchar('-');
		v = -n;
	}
	else
		v = n;
	if (v / 10)
		print_number(v / 10);
	_putchar(v % 10 + '0');
}
