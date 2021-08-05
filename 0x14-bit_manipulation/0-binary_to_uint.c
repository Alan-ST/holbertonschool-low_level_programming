#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, val = 0, bin = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i -= 1;
	while (j <= i)
	{
		bin = (b[j] - '0') << (i - j);
		val += bin;
		j++;
	}
	return (val);
}
