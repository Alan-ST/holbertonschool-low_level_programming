#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: num
 * @size: size
 * Return: 0 or array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	a = (char *) malloc(nmemb * size);
	if (a == 0)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		a[i] = '\0';
	return (a);
}
