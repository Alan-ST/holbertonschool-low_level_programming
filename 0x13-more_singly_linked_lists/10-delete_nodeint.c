#include "lists.h"
/**
 * delete_nodeint_at_index - 
 * @head: list
 * @index: position
 * Return: nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head, *nex = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (!index)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
		return (1);
	}
	while (h != NULL)
	{
		if (i == index)
		{
			nex->next = h->next;
			free(h);
			return (1);
		}
		nex = h;
		h = h->next;
		i++;
	}
	return (-1);
}
