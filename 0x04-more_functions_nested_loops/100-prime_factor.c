#include "holberton.h"
/**
 * main - finds and prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long div = 2, maxNum;

	while (n != 0)
	{
		if (n % div != 0)
			div += 1;
		else
		{
			maxNum = n;
			n /= div;
			if (n == 1)
			{
				printf("%ld\n", maxNum);
				break;
			}
		}
	}
	return (0);
}
