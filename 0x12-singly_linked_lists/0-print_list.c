#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *l = h;
	size_t n = 0;

	while (l != NULL)
	{
		if (l.str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", l.len, l.str);
		l = l.next;
		n++;
		i++;
	}
	return (n);
}
