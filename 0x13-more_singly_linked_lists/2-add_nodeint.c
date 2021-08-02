#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: list
 * @n: node
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h = NULL;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}
