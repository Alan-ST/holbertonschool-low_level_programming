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

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
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
		i++;
		nex = nex->next;
	}
	free(h);
	return (NULL);
}
