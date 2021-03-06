#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - performs simple operations
 * @argc: num
 * @argv: value
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != '+' &&
	     *argv[2] != '-' &&
	     *argv[2] != '*' &&
	     *argv[2] != '/' &&
	     *argv[2] != '%') ||
	     argv[2][1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2]) (atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
