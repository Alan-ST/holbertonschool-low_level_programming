#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: list
 * Return:
 */
int pop_listint(listint_t **head)
{
	listint_t *h = NULL;
	int i;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	h = (*head)->next;
	free(*head);
	*head = h;
	return (i);
}
