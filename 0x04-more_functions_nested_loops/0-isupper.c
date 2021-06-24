#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: char
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int i, v = 0;

	for (i = 'A'; i <= 'Z': i++)
	{
		if (c == i)
			v = 1;
	}
	return (v);
}
