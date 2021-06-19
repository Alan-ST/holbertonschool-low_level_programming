#include <stdio.h>
/**
 * main - prints base16
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char base16[] = "0123456789abcdef";

	while (base16[i] != '\0')
	{
		putchar(base16[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
