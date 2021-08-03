#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *head = h;
	size_t i = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
