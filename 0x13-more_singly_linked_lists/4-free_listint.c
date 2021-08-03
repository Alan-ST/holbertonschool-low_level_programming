#include "lists.h"
/**
 * free_listint - frees a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint *nn;

	while (head != NULL)
	{
		nn = head->next;
		free(head);
		head = nn;
	}
}
