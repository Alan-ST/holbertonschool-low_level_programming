#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: list
 * @n: node
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *n2;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head != NULL)
	{
		n2 = *head;
		while (n2->next != NULL)
			n2 = n2->next;
		n2->next = h;
	}
	else
		*head = h;
	return (h);
}
