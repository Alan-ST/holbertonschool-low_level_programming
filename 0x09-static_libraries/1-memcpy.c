#include "main.h"
/**
 * *_memcpy - main function
 * @dest: destiny
 * @src: source
 * @n: num
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}