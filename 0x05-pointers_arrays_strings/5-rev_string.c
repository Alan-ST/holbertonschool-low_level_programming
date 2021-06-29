#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{

	int i, r = 0;
	char a, b;

	while (s[r] != '\0')
		r++;
	r--;
	for (i = 0; i <= r; i++)
	{
		a = s[i];
		b = s[l];

		s[i] = b;
		s[l] = a;
		l--;
	}
}
