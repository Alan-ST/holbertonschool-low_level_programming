#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: list
 * @index: node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
