#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int b = 1;
	unsigned int i, a = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			a = (s[i] - '0') + a * 10;

			if (s[i + 1] == ' ')
				break;
		}

		else if (s[i] == '-')
			b = b * -1;
	}
	return (a * b);
}
