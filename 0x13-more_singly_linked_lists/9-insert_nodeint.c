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
	listint_t *h = *head, *nex = NULL;
	unsigned int i = 0;

	nex = malloc(sizeof(listint_t));
	if (head == NULL || nex == NULL)
		return (NULL);
	nex->next = NULL;
	nex->n = n;
	if (!idx)
	{
		nex->next = *head;
		*head = nex;
		return (nex);
	}
	while (h != NULL)
	{
		if (i == (idx - 1))
		{
			nex->next = h->next;
			h->next = nex;
			return (nex);
		}
		h = h->next;
		i++;
	}
	free(nex);
	return (NULL);
}
