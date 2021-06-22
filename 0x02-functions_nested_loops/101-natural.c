#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int n, r;

	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			r += n;
	}
	printf("%d\n", r);
	return (0);
}
