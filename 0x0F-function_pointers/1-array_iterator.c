#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size < 1 ||action == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		action(array[i]);
}
