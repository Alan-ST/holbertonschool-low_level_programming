#include "lists.h"
/**
 * print_listint_safe - prints a list
 * @head: list
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		if (head == head->next->next && count > 2)
			break;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
