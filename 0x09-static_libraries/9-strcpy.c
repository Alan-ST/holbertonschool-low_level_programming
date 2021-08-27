#include "main.h"
/**
 * _strcpy - main function
 * @src: source
 * @dest: destiny
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}