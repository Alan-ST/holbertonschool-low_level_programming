#include "holberton.h"
/**
 * _isdigit - checks for a digit
 * @c: char
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int i, v = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			v = 1;
	}
	return (v);
}
