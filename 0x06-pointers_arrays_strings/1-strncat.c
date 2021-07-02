#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: num
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			break;
	}
	return (dest);
}
