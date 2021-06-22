#include "holberton.h"
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	unsigned long long int i, x = 1, y = 2, z = 0;

	printf("%llu, %llu, ", x, y);
	for (i = 0; i < 96; i++)
	{
		z = x + y;
		printf("%llu", z);
		x = y;
		y = z;
		if (i != 95)
			printf(", ");
	}
	printf("\n");
	return (0);
}
