#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: num
 * @index: index
 * Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ind = ~(1 << index);

	if (index > sizeof(unsigned int) * sizeof(long))
		return (-1);

	*n &= ind;
	return (1)
}
