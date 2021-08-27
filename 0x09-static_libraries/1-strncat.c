#include "main.h"
/**
 * _strncat - main function
 * @src: source
 * @dest: destiny
 * @n: num
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = _strlen(dest);
	int s = _strlen(src);
	int i = 0;
	int r = 0;

	while (r < n)
	{
		if (r > s)
			break;
		dest[d + i] = src[r];
		i++;
		r++;
	}
	dest[d + i] = 0;
	return (dest);
}
/**
 * _strlen - main function
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}