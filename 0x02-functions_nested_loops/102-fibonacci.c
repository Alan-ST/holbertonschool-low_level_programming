#include "holberton.h"
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int i, x = 1, y = 2, z = 0;

	printf("%lu, %lu, ", x, y);
	for (i = 0; i < 48; i++)
	{
		z = x + y;
		printf("%lu", z);
		x = y;
		y = z;
		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
