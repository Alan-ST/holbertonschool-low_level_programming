#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: ,
 * @n: num
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *s;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(a, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator == 0)
			continue;
		else if (i + 1 != n)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
