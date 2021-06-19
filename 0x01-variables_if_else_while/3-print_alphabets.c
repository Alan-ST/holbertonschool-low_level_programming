#include <stdio.h>
/**
 * main - prints the alphabets
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	char ABC[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (abc[i] != '\0')
	{
		putchar(abc[i]);
		i++;
	}
	i = 0;
	while (ABC[i] != '\0')
	{
		putchar(ABC[i]);
		i++;
	}
	return (0);
}
