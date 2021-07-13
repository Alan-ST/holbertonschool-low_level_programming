#include "holberton.h"
/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: value
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i <= 2; i++)
			mul = mul * atoi(argv[i]);
		printf("%d\n", mul);
		return (0);
	}
}
