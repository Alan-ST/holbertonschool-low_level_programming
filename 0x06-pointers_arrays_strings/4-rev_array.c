#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: num
 */
void reverse_array(int *a, int n)
{
	int i, rev, j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
	}
}
