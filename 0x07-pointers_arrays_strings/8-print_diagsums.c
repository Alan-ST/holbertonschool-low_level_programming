#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 = sum1 + *(a + ((size + 1) * i));
	for (i = size; i > 0; i--)
		sum2 = sum2 + *(a + ((size - 1) * i));
	printf("%d, %d\n", sum1, sum2);
}
