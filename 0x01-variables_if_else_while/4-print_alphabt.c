#include <stdio.h>
/**
 * main - prints the alphabets without q or e
 * Return: 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
			;
		else
			putchar(l);
	}
	putchar('\n');
	return (0);
}
