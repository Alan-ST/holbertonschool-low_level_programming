#include <stdio.h>
/**
* main - prints a comb
* Return: 0
*/
int main(void)
{
	int x = '0';

	while  (x <= '9')
	{
		int y = '0';

		while  (y <= '9')
		{
			if (x != y)
			{
				if (x < y)
				{
					putchar(x);
					putchar(y);
					if (x == '8' && y == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
			y += 1;
		}
		x += 1;
	}
	putchar('\n');
	return (0);
}
