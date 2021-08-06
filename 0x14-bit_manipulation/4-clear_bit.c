#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: num
 * @index: index
 * Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * sizeof(long))
		return (-1);
	*n &= 1 << index;
	return (1)
}
