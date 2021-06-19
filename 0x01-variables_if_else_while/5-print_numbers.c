#include <stdio.h>
/**
 * main - prints numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char base10[] = "0123456789\n";

	while (base10[i] != '\0')
	{
		putchar(base10[i]);
		i++;
	}
	return (0);
}
