#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers
 */
void more_numbers(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
