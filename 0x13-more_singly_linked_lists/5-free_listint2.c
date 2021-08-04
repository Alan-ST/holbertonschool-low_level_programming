#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *h = NULL;

	if (head == NULL)
		return;
	while (*head)
	{
		h = (*head)->next;
		free(*head);
		*head = h;
	}
}
