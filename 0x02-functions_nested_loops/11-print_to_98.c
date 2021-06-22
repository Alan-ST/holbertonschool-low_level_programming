#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: num
 */
void print_to_98(int n)
{
	int x = 0;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n == 98)
		printf("%d", n);
	else 
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d", x);
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	printf("\n");
}
