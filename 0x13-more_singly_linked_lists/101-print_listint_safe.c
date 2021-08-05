#include "lists.h"
/**
 * print_listint_safe - prints a list
 * @head: list
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h = head;
	size_t i = 0;

	if (head == NULL)
		exit(98);
	while (h != NULL)
	{
		if (h == h->next->next && count > 2)
			break;
		printf("[%p] %d\n", (void *)h, h->n);
		h = h->next;
		i++;
	}
	return (i);
}
