#include "holberton.h"
/**
 * main - prints the sum of all the multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int n, r;

	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			r += n;
	}
	printf("%d\n", r);
	return (0);
}
