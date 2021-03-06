#include "main.h"
/**
 * _strcat - main function
 * @src: source
 * @dest: destiny
 * Return: The pointer to destination buffer.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int r = 0;

	while (dest[i])
		i++;
	while (src[r])
	{
		dest[i] = src[r];
		i++;
		r++;
	}
	dest[i] = '\0';
	return (dest);
}