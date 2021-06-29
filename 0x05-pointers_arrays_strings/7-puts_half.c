#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int c = 0, v;

	while (str[c] != '\0')
		c++;

	if (c % 2 == 1)
	{
		v = (c - 1) / 2;
		v -= c;
	}

	else
		v = c / 2;

	while (str[v])
	{
		_putchar(str[v]);
		v++;
	}
	_putchar('\n');
}
