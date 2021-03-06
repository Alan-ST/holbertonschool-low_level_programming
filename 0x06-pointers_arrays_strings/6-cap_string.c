#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	char x[] = {'}', ')', '?', '!', '"', '.', '\n',
		'\t', ',', ';', ' ', '(', '{'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
			if (s[i] == x[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
	}
	return (s);
}
