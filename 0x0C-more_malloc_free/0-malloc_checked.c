#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size
 * Return: int
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = (unsigned int *) malloc(b);
	if (a == 0)
		exit(98);
	return (a);
}
