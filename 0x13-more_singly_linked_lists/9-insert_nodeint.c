#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: list
 * @idx: index/position
 * @n: num
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = NULL, *nex = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(listint_t));
	h->next = NULL;
	h->n = n;

	if (idx == NULL)
	{
		h->next = *head;
		*head = h;
		return (h);
	}

	nex = *head;
	while (nex != NULL)
	{
		if (i == (idx - 1))
		{
			h->next = nex->next;
			nex->next = h;
			return (h);
		}
		nex = nex->next;
		i++;
	}
	free(h);
	return (NULL);
}
