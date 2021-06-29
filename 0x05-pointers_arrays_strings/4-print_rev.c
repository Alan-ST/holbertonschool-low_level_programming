#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	while (c != 0)
	{
		c--;
		_putchar(s[c]);
	}
	_putchar('\n');
}
