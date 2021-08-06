#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: num
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	else if (n > 1)
		print_binary(n >> 1);
	else if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}
